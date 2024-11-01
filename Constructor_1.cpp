#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    double cgpa;
    Student(int r, double c){//constructor function
        roll = r; 
        cgpa = c;
    }
};
int main(){
    Student Anter(639192,3.23);//constructor call with parameter
    cout<<Anter.roll<<" "<<Anter.cgpa;
    return 0;
}