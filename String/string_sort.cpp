#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    // cin>>name;
    getline(cin,name);
    sort(name.begin(),name.end());
    cout<<name<<endl;
    return 0;
}