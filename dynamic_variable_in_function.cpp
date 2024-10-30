#include<iostream>
using namespace std;
int * fun(){
    int *a = new int;//dynamic memory
    *a = 28;
    return a;
}
int main(){
    int *p= fun();
    cout<<*p;
    return 0;
}
