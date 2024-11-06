#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    getline(cin,name);
    int cunt=0;
    stringstream ss;
    string word;
    ss<<name;
    while(ss>>word){
        bool a;
        for(int i=0; i<word.size(); i++){
            if((word[i]>='a'&&word[i]<='z')||(word[i]>='A'&&word[i]<='Z')){
                a=true;
                break;
            }
            else{
                a=false;
                break;
            }
            
        }
        
        if(a==true){
                cunt++;
            }
    }
    cout<<cunt<<endl;
    return 0;
}