#include<bits/stdc++.h>
using namespace std;
class Cricket{
    public:
    int jersey_no;
    string country;
};
int main(){
    Cricket* dhoni = new Cricket;
    Cricket* kholi = new Cricket;
    dhoni->jersey_no = 18;
    dhoni->country = "India";
    kholi->jersey_no= dhoni->jersey_no;
    kholi->country= dhoni->country;
    delete dhoni;
    cout<<kholi->jersey_no<<" "<<kholi->country<<endl;
    cout<<dhoni->jersey_no<<" "<<dhoni->country<<endl;//print garbage value
    return 0;
}