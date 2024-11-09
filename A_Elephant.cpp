#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a =0,cnt=0;;
    cin>>n;
    if(n>=1&&n<=5){
        cout<<1<<endl;
    }
    else{
        for(int i=0; a<n; i++){
            a=a+5;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}