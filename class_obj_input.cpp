#include<bits/stdc++.h>
using namespace std;
class Car{
    public:
    char name[100];
    char color[100];
    int prize;
    double weight;
};
int main(){
    Car o;
    cin.getline(o.name,100);
    cin>>o.weight;
    getchar();
    cin.getline(o.color,100);
    cin>>o.prize;
    cout<<o.name<<" "<<o.color<<" "<<o.prize;
    return 0;
}