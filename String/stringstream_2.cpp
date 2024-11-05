#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    stringstream ss;//alternative-> stringstream ss(name);
    ss<<name;
    string word;
    while(ss>>word){
        cout<<word<<endl;
    }
    return 0;
}