#include<iostream>
using namespace std;
int main(){
    int *a= new int;//int *a static variable and new int dynamic variable.
    *a = 39;
    cout<<*a;
    return 0;
}