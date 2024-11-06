#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    int age;
    int roll;
    Person(string name,int age, int roll){
        this->name = name;
        this->age = age;
        this->roll = roll;
    }
};
int main(){
    Person anter("Anter Nath",20,639192);
    Person ridoy("Ridoy Nath",25,639193);
    anter = ridoy;
    // delete ridoy;
    cout<<anter.name<<" "<<anter.roll<<endl;
    cout<<ridoy.name<<" "<<ridoy.roll;
    return 0;
}