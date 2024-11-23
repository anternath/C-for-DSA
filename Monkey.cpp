#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    
    while(getline(cin,name)){
        int cnt[26]={0};
        for(char c:name){
            if(c!=' '){
                int val= c-'a';
                cnt[val]++;
            }
        }
        for(int i=0; i<26; i++){
        if(cnt[i]!=0){
           for(int j=1; j<=cnt[i]; j++){
             char ch= i+'a';
            cout<<ch;
           }
        }
    }
    cout<<endl;
    
    }
    
    return 0;
}