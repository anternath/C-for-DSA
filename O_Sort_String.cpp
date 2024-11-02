#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt[26]={0};
    for(int i=0; i<n; i++){
        char ch;
        cin>>ch;
        int val= ch -'a';
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