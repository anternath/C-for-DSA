#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    cin>>a;
    cin>>b;
    int x=1;
    int i;
    for(i=0; a>=x; i++){
     a = a-x;
     x =b*x;   
    }
    cout<<i;
}