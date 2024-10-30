#include<iostream>
using namespace std;
int* fun(){
    int* a= new int[4];
    for(int i=0; i<4; i++){
        cin>>a[i];
    }
    return a;//return address of a array
}
int main(){
   int *a= fun();
   for(int i=0; i<4; i++){
    cout<<a[i]<<" ";
   } 
}