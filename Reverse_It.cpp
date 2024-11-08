#include<bits/stdc++.h>
using namespace std;
class Student{
public:
string mn;
int cls;
char s;
int id;
};
bool cmp(Student a,Student b){
    return a.s||b.s;
}
int main(){
    int n;
    cin>>n;
    Student a[n];
    for(int i=0; i<n; i++){
        cin>>a[i].mn>>a[i].cls>>a[i].s>>a[i].id;
    }
    int x=0;
    int y=n-1;
    for(int j=0; y>x; j++){
        char ch= a[x].s;
        a[x].s=a[y].s;
        a[y].s=ch;
        x++;
        y--;
    }
    for(int i=0; i<n; i++){
        cout<<a[i].mn<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<endl;
    }
    return 0;
}