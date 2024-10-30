#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main(){
    char ch[100];
    int a;
    //if you get string with out any space
    // cin>>ch;
    // cout<<ch;
    
    //we get input with space in c string.h
    // fgets(ch,100,stdin);
    // cout<<ch;

    //now we get input with space in c++
    // cin.getline(ch,100);
    // cout<<ch;

    //if we need to get input int and string with space;
    cin>>a;//int value input dewar por enter press korle string ti enter tike input niye felbe.
    getchar();//ei funtion tir maddome enter press korle oitake skip kora hoi.
    cin.getline(ch,100);
    cout<<a<<endl;
    cout<<ch;
}