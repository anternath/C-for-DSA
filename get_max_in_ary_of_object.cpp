#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;
};
int main(){
    int n;
    cin>>n;
    Student a[n];
    for(int i=0; i<n; i++){
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    Student max;
    max.marks = INT_MIN;
    for(int i=0; i<n; i++){
        if(a[i].marks>max.marks){
            max=a[i];
        }
    }
    cout<<max.name<<" "<<max.roll<<" "<<max.marks;
    return 0;
}