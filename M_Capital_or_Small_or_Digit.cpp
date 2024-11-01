#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>='0'&&ch<='9'){
        cout<<"IS DIGIT";
    }
    else if(ch>='a'&&ch<='z'){
        cout<<"ALPHA\nIS SMALL";
    }
    else if(ch>='A'&&ch<='Z'){
        cout<<"ALPHA\nIS CAPITAL";
    }
    return 0;
}