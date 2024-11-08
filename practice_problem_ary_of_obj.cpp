#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll; 
    int marks;
};
bool cmp(Student a, Student b){
    if(a.marks>b.marks){
        return true;
    }
    else{
        if(a.marks==b.marks){
            return a.roll<b.roll;
        }
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    Student x[n];
    for(int i=0; i<n; i++){
        cin>>x[i].name>>x[i].roll>>x[i].marks;
    }
    sort(x,x+n,cmp);
    for(int i=0; i<n; i++){
        cout<<x[i].name<<" "<<x[i].roll<<" "<<x[i].marks<<endl;
    }
    return 0;
}