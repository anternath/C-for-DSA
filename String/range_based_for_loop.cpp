#include<bits/stdc++.h>
using namespace std;
int main(){
    string name= "Anter nath";
    sort(name.begin(),name.end());
    for(char c: name){
        if(c!=' '){//range based for loop.
            cout<<c;
        }
    }
    return 0;
}