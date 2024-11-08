#include<bits/stdc++.h>
using namespace std;
int main(){
    string sen;
    getline(cin,sen);
    string str;
    cin>>str;
    stringstream ss(sen);
    string word;
    int cnt=0;
    while(ss>>word){
        if(word==str){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}