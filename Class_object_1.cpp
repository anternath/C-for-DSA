#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    double cgpa;
};
int main(){
    Student obj;
    obj.roll = 639192;
    obj.cgpa = 3.23;
    cout<<obj.roll<<" "<<obj.cgpa;
    return 0;
}