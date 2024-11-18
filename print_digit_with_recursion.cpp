#include<bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n==0) return;
    int digit= n%10;
    n=n/10;
    fun(n);
    cout<<digit<<" ";
}
int main(){
    int test;
    cin>>test;
    for(int i=0; i<test; i++){
        int n;
        cin>>n;
        fun(n);
        cout<<endl;
    }
    return 0;
}
