#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch[100002];
    while(cin.getline(ch,100002))
    {sort(ch,ch+strlen(ch));
    for(size_t i=0; i<strlen(ch); i++){
        if(ch[i]!=' '){
            cout<<ch[i];
        }
    }
    cout<<endl;
    }
    
    return 0;
}