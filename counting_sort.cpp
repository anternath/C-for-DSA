#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    int cnt[26]={0};
    for(char c:a){
        cnt[c-'a']++;
    }
    for(char i='a'; i<='z'; i++){
        // cout<<i<<"-"<<cnt[i-'a']<<endl;
        for(int j=0; j<cnt[i-'a']; j++){
            cout<<i;
        }
    }
    return 0;
}