#include<bits/stdc++.h>
using namespace std;
unsigned long long Power(int base,int pow){
    unsigned long long result=1;
    for(int j=1; j<=pow; j++){
        result *= base;
    }
    return result;
}
int main(){
    int a;
    int b;
    cin>>a>>b;
    unsigned long long sum=-1;
    for(int i=0; i<=b; i++){
        if(i%2==0){
            unsigned long long cnt=Power(a,i);
            sum += cnt;
        }
    }
    cout<<sum;
    return 0;
}
