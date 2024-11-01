#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int ar[3];
    for(int i=0; i<3; i++){
        cin>>ar[i];
    }
    int mx= INT_MIN;
    int mn= INT_MAX;
    for(int i=0; i<3; i++){
        mn= min(mn,ar[i]);
        mx= max(mx,ar[i]);
    }
    cout<<mn<<" "<<mx;
}