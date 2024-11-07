#include<bits/stdc++.h>
using namespace std;
class Cricketers{
    public:
    int jersey_no = 18;
    string name = "Dhoni";
};
int main(){
    Cricketers* dhoni = new Cricketers();
    Cricketers* kholi = new Cricketers();
    // kholi = dhoni;//pointer copy korle delete korar por data hariye jai.
    kholi->name = "Kholi";
    kholi->jersey_no = dhoni->jersey_no;
    delete dhoni;
    cout<<kholi->name<<endl<<kholi->jersey_no;
    return 0;
}