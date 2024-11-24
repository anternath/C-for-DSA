#include<bits/stdc++.h>
using namespace std;
class Count{
    public:
    char value;
    int cnt;
};
bool cmp(Count a, Count b){
    if(a.cnt==b.cnt){
        return a.value<b.value;
    }
    else{
        return a.cnt>b.cnt;
    }
}
int main(){
    string name;
    cin>>name;
    Count frq[26];
    for(int i=0; i<26; i++){
        frq[i].value = char(i+'a');
        frq[i].cnt = 0;
    }
    for(char ch: name){
        int ascii = ch- 'a';
        frq[ascii].cnt++;
    }
    sort(frq,frq+26,cmp);
    for(int i=0; i<26; i++){
        if(frq[i].cnt!=0){
            for(int j=1; j<=frq[i].cnt; j++){
                cout<<frq[i].value;
            }
        }
    }
    return 0;
}