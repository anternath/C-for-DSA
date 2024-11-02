#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;
    Student(string name, int roll, char section, int math_marks, int cls){
        this->name = name;
        this->roll = roll;
        this->section= section;
        (*this).math_marks = math_marks;
        this->cls = cls;
    }
};
int main(){
    Student anter("Anter Nath",639192,'A',85,10);
    Student robin("HK Robin",639193,'A',75,10);
    Student miad("Miad Shardar",639196,'A',80,10);
    if(anter.math_marks>robin.math_marks&& anter.math_marks>miad.math_marks){
        cout<<"Name : "<<anter.name<<endl<<"Roll : "<<anter.roll<<endl<<"Section : "<<anter.section<<endl<<"Math_Marks : "<<anter.math_marks<<endl<<"Class : "<<anter.cls;
    }
    else if(robin.math_marks>anter.math_marks&& robin.math_marks>miad.math_marks){
               cout<<"Name : "<<robin.name<<endl<<"Roll : "<<robin.roll<<endl<<"Section : "<<robin.section<<endl<<"Math_Marks : "<<robin.math_marks<<endl<<"Class : "<<robin.cls;
 
    }
    else{
                cout<<"Name : "<<miad.name<<endl<<"Roll : "<<miad.roll<<endl<<"Section : "<<miad.section<<endl<<"Math_Marks : "<<miad.math_marks<<endl<<"Class : "<<miad.cls;

    }
    return 0;
}