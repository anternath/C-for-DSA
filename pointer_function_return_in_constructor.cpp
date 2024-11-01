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
Student* fun(){
        Student anter(5,4.33);
        Student *p = &anter;//p pointer ti anter er address rakhe.
    return p; //return Student type of object;
    }
int main(){
    Student* ans = fun(); // ans pointer ti p er address rakhe.
    //p return hower por fun function er sob data clear hoiye jai. 
    //ar ans ke jokhon de refarence korchi tokon ans e sudu p pointer er value jah already delete hoiy geche tai output e garbage value show kore. 
    cout<<ans->roll<<" "<<(*ans).cgpa;//garbage value
    return 0;
}