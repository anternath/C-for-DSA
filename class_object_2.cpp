#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    char color;
    double cgpa;
    };
int main(){
    Student a;
    char tmp[100]= "Anter";//initilize another char array.
    //a.name = "Anter"; declaration not possible.
    strcpy(a.name, tmp);//and copy a.name here
    cin>>a.color;
    cout<<a.name;
    return 0;
}