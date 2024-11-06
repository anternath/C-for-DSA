#include<bits/stdc++.h>
using namespace std;
void fun(stringstream& ss){//eikane & sign dhara referance bujai ss referance char error dekhai
    string word;
    if(ss>>word){//base case: jodi word read korar na take tobe funtion return korbe;
        fun(ss);
        cout<<word<<endl;
    }
}
int main(){
    string name="My name is Anter Kumar Nath";
    stringstream ss;
    ss<<name;//name hote stringstream ekti ekti word return kore 
    fun(ss);
    return 0;
}