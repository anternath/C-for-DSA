#include<bits/stdc++.h>
using namespace std;
class Student{
public:
 string name;
};
bool cmp(Student a, Student c){
    
    return a.name[0]<=c.name[0];
    // return a.name<=c.name;
}
int main(){
    int n;
    cin>>n;
    Student b[n];
    for(int i=0; i<n; i++){
        cin>>b[i].name;
    }
    sort(b,b+n,cmp);
    for(int i=0; i<n; i++){
        cout<<b[i].name<<endl;
    }
    return 0;
}