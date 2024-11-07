#include<bits/stdc++.h>
using namespace std;
class Students{
    public:
    string name;
    int age;
    int marks;
};
int main(){
    int n;
    cin>>n;
    getchar();
    Students* obj = new Students[n];//normal array object Students obj[n];
    for(int i=0; i<n; i++){
        //you can use a getchar() here for skip an enter;
        getline(cin,obj[i].name);
        cin>>obj[i].age>>obj[i].marks;
        getchar();
    }
    for(int i=0; i<n; i++){
        cout<<obj[i].name<<" "<<obj[i].age<<" "<<obj[i].marks<<endl;
    }
    return 0;
}