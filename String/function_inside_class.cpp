#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    float age;
    int math;
    float english;
    Person(string name, float age, int mt, float en){
        this->name= name;
        this->age = age;
        math = mt;
        english = en;
    }
    void fun(){
        cout<<name<<" "<<age<<endl;
    }
    int Total_marks(){
        return math+english;
    }
};
int main(){
    Person oj("Anter Nath",20,85,73.545);
    oj.fun();
    cout<<oj.Total_marks();
    return 0;
}