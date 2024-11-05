#include<bits/stdc++.h>
using namespace std;
int main(){
    string name = "Anter Nath";
    cout<<name[0]<<endl;//eita jehetu dynamic char array tai normal array er moto index dhore element access kora jai;
    cout<<name.at(0)<<endl;//index dhore element access korar c++ er funtion
    cout<<name.front()<<endl;//string er first element ti access korar funtion
    cout<<name[name.size()-1]<<endl;//fundamentally element access
    cout<<name.at(name.size()-1)<<endl;
    cout<<name.back()<<endl;//string er last element access korar funtion
    return 0;
}