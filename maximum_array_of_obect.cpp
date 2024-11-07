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
    Student mx;
    mx.marks = INT_MIN;
    for(int i=0; i<n; i++){
        cin>>a[i].name>>a[i].marks;
    }
    for(int i=0; i<n; i++){
        if(a[i].marks>mx.marks){
            mx=a[i];
        }
    }
    cout<<mx.name<<" "<<mx.marks<<endl;
    return 0;
}