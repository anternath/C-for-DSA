#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar1[n],ar2[n];
    int frq1[10]={0};
    int frq2[10]={0};
    int cnt =0;
    for(int i=0; i<n; i++){
        cin>>ar1[i];
        frq1[ar1[i]]++;
    }
    for(int i=0; i<n; i++){
        cin>>ar2[i];
        frq2[ar2[i]]++;
    }
    for(int i=0; i<10; i++){
        if(frq1[i]!=frq2[i]){
            cnt++;
            break;
        }
    }
    if(cnt==0){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}