#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int frq[26]={0};
    for(char ch:str){
        frq[ch-'a']++;   
    }
    for(char i='a'; i<='z'; i++){
        if(frq[i-'a']!=0){
            cout<<i<<" : "<<frq[i-'a']<<endl;
        }
    }
    return 0;
}