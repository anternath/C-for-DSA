#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    string str;
    cin>>str;
    
    if(str[a]=='-'&&(a+b+1)==str.size()){
        int cnt=0;
        for(int i=0;i<str.size(); i++){
            if(i!=a &&!(isdigit(str[i]))){
                cnt=1;
                break;
            }
        }
        if(cnt==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    }
    else{
        cout<<"No"<<endl;
    }
    
    
    return 0;
}