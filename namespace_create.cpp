#include<bits/stdc++.h>
using namespace std;
namespace anter{
    int age =20;
    void fun(){
        cout<<"Anter namespace"<<endl;
    }
    class Person{
        public:
        int roll;
    };
}
int main(){
    cout<<anter::age<<endl;
    anter::fun();
    anter::Person obj;
    obj.roll= 639192;
    cout<<obj.roll<<endl;
    return 0;
}