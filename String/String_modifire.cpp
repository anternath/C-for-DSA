#include<bits/stdc++.h>
using namespace std;
int main(){
    string name="Anter Nat";
    name[9]='h';//ei systeme arrayr size implement kore na jar karone oi index e charater ti append hocce na;
    cout<<name<<endl;
    name +="h";//eikane += operator ti ekti normally kaj kore na etir backend e string concatation korar jonno funtion build kora hoiyeche;
    cout<<name<<endl;
    name.pop_back();
    cout<<name<<endl;
    name.push_back('h');
    cout<<name<<endl;
    name[9]='\0';//fundametally kono pop back korar niyom
    cout<<name.size()<<endl;
    name.append("h");
    cout<<name<<endl;
    name[4]='\0';
    cout<<name<<endl;
    cout<<name[4]<<endl;
    cout<<name[5]<<endl;
    return 0;
}