#include<bits/stdc++.h>
using namespace std;
int main(){
    string n1;
    string n2;
    
    
    int n;
    
    cin>>n;
    getchar();
    for(int i=1; i<=n; i++){
        getline(cin,n1);
        getline(cin,n2);
        int cnt1[26]={0};
        int cnt2[26]={0};
        int count=0;
        for(int j=0; j<n1.size(); j++){
            if(n1[j]>='a'&&n1[j]<='z'||n1[j]>='A'&&n1[j]<='Z'){
                if(n1[j]>='A'&&n1[j]<='Z'){
                    n1[j] = n1[j]+32;

                }
                int val = n1[j]-'a';
                cnt1[val]++;
            }
        }
        for(int j=0; j<n2.size(); j++){
            if(n2[j]>='a'&&n2[j]<='z'||n2[j]>='A'&&n2[j]<='Z'){
                if(n2[j]>='A'&&n2[j]<='Z'){
                    n2[j] = n2[j]+32;

                }
                int val = n2[j]-'a';
                cnt2[val]++;
            }
        }
       for(int k=0; k<26; k++){
        if(cnt1[k]!=cnt2[k]){
            count++;
            break;
        }
       }
       if(count==0){
        cout<<"Case "<<i<<": "<<"Yes"<<endl;
       }
       else{
        cout<<"Case "<<i<<": "<<"No"<<endl;
       }
    
    }
    
    
    return 0;
}