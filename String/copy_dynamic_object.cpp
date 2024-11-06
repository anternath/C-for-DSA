#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    int roll;
    Person(string name,int roll){
        this->name = name;
        this->roll = roll;
    }
};
int main(){
    Person* anter = new Person("Anter Nath",20);
    Person* ridoy = new Person("Ridoy Nath",25);
    *anter=*ridoy;//dynamic object pointer return kore .
    //amra jodi dereferance kora chara obj copy kori abong ridoy obj ta delete kore di tahole 
    //segmentation fault khabo karon object 2 ta tader pointer copy kore sotharang ridoy delete kore dile pointer harai jabe.
    delete ridoy;//derefarance dhara value copy kore tai ager ta delete kore dile o anter er modde ridoy sob data theke jai
    cout<<anter->name<<endl;
    // cout<<ridoy->name<<endl;
    return 0;
}