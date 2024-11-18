#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cin>>name;
    bool count = true;
    int i=0; 
    int j=name.size()-1;
    while(i<j){
        if(name[i]==name[j]){
            count=true;
        }
        else{
            count= false;
            break;
        }
        i++;
        j--;
    }
    if(count==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}