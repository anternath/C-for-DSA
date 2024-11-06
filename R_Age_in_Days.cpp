#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int yer = n/365;
    n = (n%365);
    int mon= n/30;
    n = (n%30);
    cout<<yer<<" years"<<endl<<mon<<" months"<<endl<<n<<" days"<<endl; 
    return 0;
}