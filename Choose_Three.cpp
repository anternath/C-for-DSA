#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int m=1; m<=n; m++){
        int a,b;
    cin>>a>>b;
    int ar[a];
    int count=0;
    for(int i=0; i<a; i++){
        cin>>ar[i];
    }
    for(int i=0; i<a-2; i++){
        for(int j=i+1; j<a-1; j++){
            for(int k=j+1; k<a; k++){
                int cnt=ar[i]+ar[j]+ar[k];
                if(b==cnt){
                    count++;
                    break;
                }

            }
        }
    }
    if(count==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    }
    return 0;
}