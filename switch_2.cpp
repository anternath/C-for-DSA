#include<iostream>
using namespace std;
int main(){
    int d=5;
    switch(d%2){
        case 0:
        cout<<"Even";
        break;
        case 1:
        cout<<"Odd";
    }
    return 0;
}