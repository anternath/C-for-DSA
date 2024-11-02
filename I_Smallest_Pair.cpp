#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int m=1; m<=n; m++){
        int a;
    cin>>a;
    int ch[a];
    for(int i=0; i<a; i++){
        cin>>ch[i];
    }
    int mn= INT_MAX;
    int count;
    for(int i=0; i<a-1; i++){
        for(int j=i+1; j<a; j++){
            count= ch[i]+ch[j]+j+1-(i+1);
            if(count<mn){
                mn=count;
            }
        }
    }
    cout<<mn<<endl;
    }
}