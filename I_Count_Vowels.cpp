#include<bits/stdc++.h>
using namespace std;
int fun(string name){
    int cnt=0;
    for(char c:name){
        if(c>'A'&&c<'Z'){
            c=c+32;
        }
        if(c=='a'||c=='i'||c=='e'||c=='o'||c=='u'){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    string name;
    getline(cin,name);
    int cnt=fun(name);
    cout<<cnt;
    return 0;
}