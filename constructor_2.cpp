#include<bits/stdc++.h>
using namespace std;
class Boys{
    public:
    int age;
    float height;
    Boys(int age,float height){
        (*this).height = height;//'this' is a pointer. which address of constructor variable.
        this->age = age;//(*this) and this-> both are derefarence 'this' pointer
    }
};
int main(){
    Boys anter(20,5.8);
    cout<<anter.age<<" "<<anter.height;
    return 0;
}