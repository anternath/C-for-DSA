#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name; 
    int marks;
};
int main(){
    int n;
    cin>>n;
    Student a[n];
    Student mn;
    mn.marks= INT_MAX;
    for(int i=0; i<n; i++){
        cin>>a[i].name>>a[i].marks;
    }
    for(int i=0; i<n; i++){
        if(a[i].marks<mn.marks){
            mn = a[i];
        }
    }
    cout<<mn.name<<" "<<mn.marks;
    return 0;
}