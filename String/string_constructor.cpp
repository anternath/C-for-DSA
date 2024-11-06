#include<bits/stdc++.h>
using namespace std;
int main(){
    string name= "Anter Nath";//normal initialize
    string name1("Anter Nath");
    string name2("Anter Nath",5);//5 index er ager char gola print korbe
    string name3(name,6);//6 index soho er porer char gola print korbe
    string name4(10,'A');//a char tike 15 bar niye ekti string create korbe.
    cout<<name<<endl;
    cout<<name1<<endl;
    cout<<name2<<endl;
    cout<<name3<<endl;
    cout<<name4<<endl;
    return 0;
}