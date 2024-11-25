#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int age;
    Student(string name,int age){
        this->name= name;
        this->age = age ;
    }
    void fun(){
       cout<<name<<endl<<age<<endl; 
    }
};
int main(){
    Student anter("anter",20);
    anter.fun();
    Student ridoy("ridoy",25);
    ridoy.fun();
    return 0;
}