#include<bits/stdc++.h>
using namespace std;
void fun1(string name){
    cout<<name.size()<<endl;
    name.replace(5,1," Kumar ");
    cout<<name<<endl;
}
void fun2(char *ch){
    cout<<strlen(ch)<<endl;
}
int main(){
    string name="Anter Nath";
    char ch[11]="Anter Nath";
    fun1(name);
    fun2(ch);
    cout<<name.size();
    return 0;
}