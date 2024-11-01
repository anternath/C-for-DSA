#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    float gpa;
    Student(int roll, float gpa){
        this->roll = roll;
        this-> gpa = gpa;
    }
};
int main(){
    // new Student(639174,334); dynamic object create. its provide a pointer variable
    Student* anter = new Student(639192,4.56);
    cout<<anter->roll<<" "<<anter->gpa;

    return 0;
}