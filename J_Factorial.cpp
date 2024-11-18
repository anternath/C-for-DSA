#include<bits/stdc++.h>
using namespace std;
int fun(int n){
    if(n==0) return 1;
    long long fact= fun(n-1);
    fact *=n;
    return fact;
}
int main(){
    int n;
    cin>>n;
    long long fact= fun(n);
    cout<<fact;
    return 0;
}