#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id;
    char name[102];
    char s;
    int mark;
};
int main(){
    int t;
    cin>>t;
    Student a1;
    Student a2;
    Student a3;
    for(int i=1; i<=t; i++){
        cin>>a1.id>>a1.name>>a1.s>>a1.mark;
        cin>>a2.id>>a2.name>>a2.s>>a2.mark;
        cin>>a3.id>>a3.name>>a3.s>>a3.mark;
        // cout<<a1.id<<" "<<a1.name<<" "<<a1.s<<" "<<a1.mark<<endl;
        // cout<<a2.id<<" "<<a2.name<<" "<<a2.s<<" "<<a2.mark<<endl;
        // cout<<a3.id<<" "<<a3.name<<" "<<a3.s<<" "<<a3.mark<<endl;
        if(a1.mark>a2.mark&&a1.mark>a3.mark){
                    cout<<a1.id<<" "<<a1.name<<" "<<a1.s<<" "<<a1.mark<<endl;

        }
        else if(a2.mark>a1.mark&&a2.mark>a3.mark){
                    cout<<a2.id<<" "<<a2.name<<" "<<a2.s<<" "<<a2.mark<<endl;

        }
        else if(a3.mark>a2.mark&&a3.mark>a1.mark){
                    cout<<a3.id<<" "<<a3.name<<" "<<a3.s<<" "<<a3.mark<<endl;

        }
        else if(a1.mark==a2.mark){
            if(a1.id<a2.id){
                cout<<a1.id<<" "<<a1.name<<" "<<a1.s<<" "<<a1.mark<<endl;

            }
            else{
             cout<<a2.id<<" "<<a2.name<<" "<<a2.s<<" "<<a2.mark<<endl;
              }
        }
        else if(a1.mark==a3.mark){
            if(a1.id<a3.id){
                cout<<a1.id<<" "<<a1.name<<" "<<a1.s<<" "<<a1.mark<<endl;

            }
            else{
             cout<<a3.id<<" "<<a3.name<<" "<<a3.s<<" "<<a3.mark<<endl;
            }
        }
        else if(a2.mark==a3.mark){
            if(a2.id<a3.id){
             cout<<a2.id<<" "<<a2.name<<" "<<a2.s<<" "<<a2.mark<<endl;

            }
            else{
             cout<<a3.id<<" "<<a3.name<<" "<<a3.s<<" "<<a3.mark<<endl;
            }
        }
    }
    return 0;
}