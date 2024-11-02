#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    int a=0;
    int b=n-1;
    bool bo= true;
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    while(a<b){
        if(ar[a]!=ar[b]){
            bo= false;
            break;
        }
        a++;
        b--;
    }
    if(bo==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}