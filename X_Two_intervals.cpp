#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(max(a,c) <= min(b,d)){
        cout<<max(a,c)<<" "<<min(b,d);
    }
    else{
        cout<<-1;
    }
    
    return 0;
}