#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id;
    char name[101];
    char section;
    int mark;
    
};
int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        Student *obj = new Student;
        Student *obj1 = new Student;
        Student *obj2 = new Student;
        
        cin>>obj->id>>obj->name>>obj->section>>obj->mark;
        cin>>obj1->id>>obj1->name>>obj1->section>>obj1->mark;
        cin>>obj2->id>>obj2->name>>obj2->section>>obj2->mark;
        if(obj->mark>obj1->mark&&obj->mark>obj2->mark){
            cout<<obj->id<<" "<<obj->name<<" "<<obj->section<<" "<<obj->mark<<endl;
        }
        else if(obj1->mark>obj->mark&&obj1->mark>obj2->mark){
            cout<<obj1->id<<" "<<obj1->name<<" "<<obj1->section<<" "<<obj1->mark<<endl;
        }
        else if(obj2->mark>obj->mark&&obj2->mark>obj1->mark){
            cout<<obj2->id<<" "<<obj2->name<<" "<<obj2->section<<" "<<obj2->mark<<endl;
        }
        delete obj;
        delete obj1;
        delete obj2;
    }
    return 0;
}