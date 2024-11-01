#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    double cgpa;
    Student(int roll, double cgpa){
        (*this).roll = roll;
        this->cgpa = cgpa;
    }
};
Student fun(){
        Student anter(5,4.33);
    cout<<anter.roll<<" "<<anter.cgpa;
    return anter; //return Student type of object;
    }
int main(){
    fun();
    return 0;
}