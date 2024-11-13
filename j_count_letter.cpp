#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    int frq[26]={0};
    while(cin>>ch){
        if(ch=='\0'){
            break;
        }
        frq[ch-'a']++;
    }
    for(char i='a'; i<='z'; i++){
        cout<<i<<"-"<<frq[i-'a']<<endl;
    }
    return 0;
}