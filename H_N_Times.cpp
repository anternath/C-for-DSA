#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch;
    int a;
    for(int i=1; i<=n; i++){
        cin>>a>>ch;
        for(int j=0; j<a; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}