#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        string sen;
        string word;
        cin>>sen>>word;
        
        while(sen.find(word)!=-1){
            int fnd= sen.find(word);
            sen.replace(fnd,word.size(),"#");
        }
        cout<<sen<<endl;
    }
    return 0;
}