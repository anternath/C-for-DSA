#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    getline(cin,n);
    stringstream ss(n);
    stringstream s1(n);
    string word1;
    string word;
    int cnt=0;
    int cnt2=0;
    while(s1>>word1){
       cnt++;
    }
    while(ss>>word){
        reverse(word.begin(),word.end());
        cnt2++;
        cout<<word;
        if(cnt!=cnt2){
            cout<<" ";
        }
    }
    return 0;
}