#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string url;
    for(int i=1; i<=n; i++){
    
    cin>>url;
    if(url[4]!='s'){
        url.insert(4,"s");
    }
    cout<<"Case "<<i<<": "<<url<<endl;
    }
    
    return 0;
}