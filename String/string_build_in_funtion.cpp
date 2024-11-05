#include<bits/stdc++.h>
using namespace std;
int main(){
    string name= "Anter nath";
    //name change in a string class;
    // name = "Anter kumar nath";
    int a= name.capacity();
    name.resize(5);
    cout<<a<<endl;
    cout<<name<<endl;
    name.resize(10);
    name[5]=' ';
    name[6]='N';
    name[7]='a';
    name[8]='t';
    name[9]='h';
    cout<<name;
    return 0;
}