#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    int ar[row][col];
    for(int i=0;i<row; i++){
        for(int j=0; j<col; j++){
            cin>>ar[i][j];
        }
    }
    int flag=1;
    for(int i=0;i<row; i++){
        for(int j=0; j<col; j++){
            if(i==j){
                if(ar[i][j]!=ar[0][0]){
                    flag=0;
                    break;
                }
                else continue;
            }
            if(ar[i][j]!=0){
                flag =0;
                break;
            }
        }
        
    }
    if(flag==1){
        cout<<"Scaler matrix";
    }
    else{
        cout<<"Not scaler matrix";
    }
    return 0;
}