#include<iostream>
using namespace std;
int main(){
    int *a= new int[3];//small size array
    int *b= new int[3];//temporary array for store first array values
    for(int i=0; i<3; i++){
        cin>>a[i];
    }
    for(int i=0; i<3; i++){
        b[i]=a[i];// first array's value copy in temporary array
    }
    delete[] a;//delete small size array 
    a = new int[5];// increasing array declared
    for(int i=0; i<3; i++){
        a[i]=b[i];//push values in main array from temporary array
    }
    delete[] b;//delete temporary array
    for(int i=3; i<5; i++){
        cin>>a[i];//fill-up main array
    }
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";//and print increased array
    }
}