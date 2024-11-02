#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c;
    char ch,ch1;
    cin>>a>>ch>>b>>ch1>>c;
    if(ch=='+'){
        long long x= a+b;
        if(c==x){
            cout<<"Yes";
        }
        else{
            cout<<x;
        }
    }
    else if(ch=='-'){
        long long x= a-b;
        if(x==c){
            cout<<"Yes";
        }
        else{
            cout<<x;
        }
    }
    else if(ch=='*'){
        long long x= a*b;
        if(x==c){
            cout<<"Yes";
        }
        else{
            cout<<x;
        }
    }
    return 0;
}