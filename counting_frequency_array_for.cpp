#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cin>>name;
    int frq[26]={0};
    for(int i=0; i<name.size(); i++){
        int val= name[i]-'a';
        frq[val]++;
    }
    for(int i=0; i<name.size(); i++){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
        int val= int(name[i]-'a');
        if(frq[val]!=0){
            cout<<char(val+'a')<<" "<<frq[val]<<endl;
        frq[val]=0;
        }
    }
    // for(int i=0; i<26; i++){
    //     if(frq[i]!=0){
    //         char ch= char(i+'a');//typecasting
    //     cout<<ch<<"-"<<frq[i]<<endl;
    //     }
    // }
    return 0;
}