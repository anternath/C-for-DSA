#include<bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cin>>n;
    int a = n;
    double cnt = n-a;
    if(cnt>0){
        cout<<"float "<<a<<" "<<cnt;
    }
    else{
        cout<<"int "<<a;
    }
    return 0;
}