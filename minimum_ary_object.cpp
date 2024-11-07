#include<bits/stdc++.h>
using namespace std;
class Students{
    public:
    string name;
    int roll;
    int marks;
};
int main(){
    int n;
    cin>>n;
    Students ob[n];
    for(int i=0; i<n; i++){
        cin>>ob[i].name>>ob[i].roll>>ob[i].marks;
    }
    int mn= INT_MAX;
    for(int i=0; i<n; i++){
        if(ob[i].marks<mn){
            mn = ob[i].marks;
        }
    }
    for(int i=0; i<n; i++){
        if(mn==ob[i].marks){
            cout<<ob[i].name<<" "<<ob[i].roll<<" "<<ob[i].marks<<endl;
        }
    }
    return 0;
}