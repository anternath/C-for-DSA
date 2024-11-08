#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    int cnt=0;
    while(cin>>name){
        if(name=="Jessica"){
            cnt++;
            break;
        }
        else{
            cnt=0;
        }
    }
    if(cnt==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}