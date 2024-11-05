#include<bits/stdc++.h>
using namespace std;
int main(){
    string name = "Anter Nath Kumar";
    name.replace(10,6,"");
    cout<<name<<endl;
    name.insert(5," Kumar");
    cout<<name;
    return 0;
}