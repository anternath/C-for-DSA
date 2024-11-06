#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    getline(cin,n);
    int cnt=0;
    for(int i=0; i<n.size(); i++){
        if(n[i]=='E'){
            if(n[i+1]=='G'){
                if(n[i+2]=='Y'){
                    if(n[i+3]=='P'){
                        if(n[1+4=='T']){
                            cnt=1;
                        }
                    }
                }
            }
        }
        if(cnt==1){
            n.replace(i,5," ");
        }
        cnt=0;
    }
    cout<<n;
    return 0;
}