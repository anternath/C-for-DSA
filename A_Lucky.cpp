#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a;
        int x=0;
        int b =0;
        for(int k=1; k<=3; k++){
            int y = a%10;
            a = a/10;
            x += y;
        }
        for(int k=1; k<=3; k++){
            int y= a%10;
            a= a/10;
            b += y;
        }
        if(x==b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}