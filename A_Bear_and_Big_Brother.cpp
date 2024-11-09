#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int year =0;
    
        for(int i=0; a<=b; i++){
            if(a==b){
                year++;
                break;
            }
            else{
            a=a*3;
            b=b*2;
            year++;
            }
        }
    cout<<year<<endl;
    return 0;
}