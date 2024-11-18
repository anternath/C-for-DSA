#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b;
    cin>>a>>b;
    double price = 100*b/(100-a);
    cout<<fixed<<setprecision(2)<<price;
    return 0;
}