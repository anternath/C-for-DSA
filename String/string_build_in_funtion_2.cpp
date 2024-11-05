#include<bits/stdc++.h>
using namespace std;
int main(){
    string name= "Anter Nath";
    name.clear();//clear kono funtion return kore na just string ta clear ta kore dibe
    cout<<name;
    if(name.empty()==true){//empty funtion return a boolean value and make insure this string are empty or not
        cout<<"this string are empty"<<endl;
    }
    else{
        cout<<"This string are not empty"<<endl;
    }
    name = "Anter kumar nath";
    if(name.empty()==true){
        cout<<"this string are empty"<<endl;
    }
    else{
        cout<<"This string are not empty"<<endl<<"And the value is : "<<name;
    }
    return 0;
}