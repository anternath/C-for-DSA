#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=0){
        n= n/10;
        if(n>0&&n<10){
            if(n%2==0){
                cout<<"EVEN";
            }
            else{
                cout<<"ODD";
            }
        }
    }
    return 0;
}