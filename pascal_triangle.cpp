#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=0; i<=n; i++){
        for(int k=n; k>1; k--){
        cout<<" ";
    }
        int number =1;
        
        for(int j=0; j<=i; j++){
            cout<<number<<" ";
            number = number*(i-j)/(j+1);
            
        }
        cout<<endl;
    }
    return 0;
}