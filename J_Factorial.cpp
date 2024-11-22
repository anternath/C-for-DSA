#include<bits/stdc++.h>
using namespace std;
long long fun(long long n){
    if(n==0) return 1;
    long long fact= fun(n-1);
    return fact*n;
}
int main(){
    long long n;
    cin>>n;
    long long fact= fun(n);
    cout<<fact;
    return 0;
}