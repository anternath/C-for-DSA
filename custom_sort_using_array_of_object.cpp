#include<bits/stdc++.h>
using namespace std;
class Freq{
public:
    char value;
    int cout;
};
bool cmp(Freq a, Freq b){
    return a.cout>b.cout;
}
int main(){
    string str;
    cin>>str;
    Freq f[26];
    for(char c:str){
        for(int i=0; i<26; i++){
            f[i].value = char(i+'a');
            f[i].cout = 0;
        }
    }
    for(char c:str){
        int ascii = int(c-'a');
        f[ascii].cout++;
    }
    sort(f,f+26,cmp);
    for(int i=0; i<26; i++){
        if(f[i].cout!=0){
            for(int j=0; j<f[i].cout; j++){
                
                cout<<f[i].value;
            }
        }
    }
    return 0;
}