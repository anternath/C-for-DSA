#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch[n+1];
    cin>>ch;
    sort(ch,ch+n);
    cout<<ch;
    return 0;
}