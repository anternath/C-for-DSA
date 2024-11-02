#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch[n+1];
    cin>>ch;
    int cnt[26]={0};
    for(int i=0; i<n; i++){
        int val = ch[i]-'a';
        cnt[val]++;
    }
    for(int i=0; i<26; i++){
        if(cnt[i]>0){
            for(int j=1; j<=cnt[i]; j++){
                char chr= i+'a';
            cout<<chr;
            }
        }
    }
    return 0;
}