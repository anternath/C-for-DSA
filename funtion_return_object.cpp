#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    Student(string name , int roll){
        this->name= name;
        this->roll= roll;
    }
};
Student* fun(){//pointer type return
    Student *anter = new Student("Anter Nath",639192);//dynamic object return a pointer value.
    return anter;//return address
}
int main(){
    Student* anter= fun();//received pointer
    cout<<anter->name<<" "<<anter->roll<<endl;
    return 0;
}