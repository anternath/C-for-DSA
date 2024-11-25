#include<bits/stdc++.h>
using namespace std;
void print(stringstream & s){
    string word;
    if(s>>word){
        
        print(s);
        cout<<word<<endl;
    }
}
int main(){
    string name;
    getline(cin,name);
    stringstream ss;
    ss<<name;
    print(ss);
    return 0;
}