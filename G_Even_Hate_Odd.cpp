#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
        for(int i=1; i<=n; i++){
        int a;
        int even =0;
        int odd =0;
        cin>>a;
        int ar[a];
        int cnt=a/2;
            for(int j=0; j<a; j++){
            cin>>ar[j];
            if(ar[j]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(a%2!=0){
            cout<<-1<<endl;
        }
        else{
            if(even>odd){
            cnt=cnt-odd;
            cout<<cnt<<endl;
        }
        else if(even<odd){
            cnt=cnt-even;
            cout<<cnt<<endl;
        }
        else{
            cout<<0<<endl;
        }
        }
        
        }
    return 0;
}