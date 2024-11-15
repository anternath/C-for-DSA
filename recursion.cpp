#include<bits/stdc++.h>
using namespace std;
int fun(string name,int i){
    if(name[i]=='\0') return 0;
    int sum= fun(name,i+1);
    return sum+1;
}
int main(){
    string name;
    cin>>name;
    int sum= fun(name,0);
    cout<<sum;
    return 0;
}