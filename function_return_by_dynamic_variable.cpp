#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int age;
    double weight;
    Student(int age, double weight){
        this->age =age;
        this-> weight= weight;
    }
};
Student *fun(){
    Student * anter = new Student(20,60.54);//dyanmic object
    return anter;//return anter pointer. je pointer ti dynamic object poirjonto niye jaite pare.
}
int main(){
    Student *ans = fun();
    cout<<ans->age<<" "<<(*ans).weight;
    delete ans;
    return 0;
}