#include<bits/stdc++.h>
using namespace std;
void fun(int ar[],int x){
   
    for(int i=0; i<x; i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
     ar[x-1]=38;
}
int main(){
    int ar[5]={10,29,34,54,564};
    fun(ar,5);
    for(int i=0; i<5; i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}