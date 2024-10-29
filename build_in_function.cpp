#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
int main(){
    int x=10;
    int y= 15;
    int z=18;
    int w=22;
    int a= max(x,y);
    int b= max({x,y,w,z});
    int c=min({x,y,w,z});
    cout<<a<<endl<<b<<endl<<c<<endl;
    swap(x,y);
    cout<<x<<"\n"<<y;
    return 0;
}