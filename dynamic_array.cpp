#include<iostream>
using namespace std;
int main(){
    int *a = new int[6];
    for(int i=0; i<6; i++){
        cin>>a[i];
    }
    for(int i=0; i<6; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}