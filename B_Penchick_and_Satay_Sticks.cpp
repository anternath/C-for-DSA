#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int f=1; f<=t; f++){
        int n;
    cin>>n;
    int ar[n];
    bool possi=true;
    int count=0;
    int count1=0;
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    for(int i=0; i<n-1; i++)
{
    int check= abs(ar[i]-ar[i+1]);
    if(check==1){
        swap(ar[i],ar[i+1]);
        for(int j=0; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if(ar[j]==ar[k]){
                    possi= false;
                    break;
                }
                else if(ar[j]<ar[k]){
                    if(count1!=0){
                        possi=false;
                        break;
                    }
                    count=1;
                }
                else if(ar[j]>ar[k]){
                    if(count!=0){
                        possi= false;
                        break;
                    }
                    count =1;
                }
            }
        }
        break;
    }
} 

if(possi==true){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

    }
   return 0;
}