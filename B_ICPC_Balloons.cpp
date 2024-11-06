#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
    string s;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a;
        cin>>s;
        int cnt[26]={0};
        sort(s.begin(),s.end());
        for(int j=0; j<s.size(); j++){
            int val= s[j]-65;
            cnt[val]++;
        }
        int count =0;
        for(int k=0; k<26; k++){
            if(cnt[k]!=0){
                
                count+=2;
                if(cnt[k]>1){
                    for(int m=1; m<=cnt[k]-1; m++){
                        count++;
                    }
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}