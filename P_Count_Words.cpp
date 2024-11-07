#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    bool found = false;
    int cnt=0;
    getline(cin,name);
    for(char c: name){
        if(isalpha(c)){
            if(found==false){
                cnt++;
                found = true;
            }
        }
        else{
            found = false;
        }
    }
    cout<<cnt;
    return 0;
}