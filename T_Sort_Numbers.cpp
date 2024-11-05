#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[3];
    int ar2[3];
    for(int i=0; i<3; i++){
        cin>>ar[i];
        ar2[i]=ar[i];
    }
    sort(ar,ar+3);
    for(int i=0; i<3; i++){
        cout<<ar[i]<<endl;
    }
    cout<<endl;
    for(int i=0; i<3; i++){
        cout<<ar2[i]<<endl;
    }
    return 0;
}