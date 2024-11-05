#include<bits/stdc++.h>
using namespace std;
int main(){
    int  a,b,c,d;
    cin>>a>>b>>c>>d;
    long long m= (a%100)*(b%100);
    m = m*(c%100);
    m = m*(d%100);
    m= m%100; 
    if(m==0 || m>0&&m<=9){
        cout<<0<<m<<endl;
    }
    else{
        cout<<m;
    }
    return 0;
}