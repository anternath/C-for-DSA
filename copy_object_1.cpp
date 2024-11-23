#include<bits/stdc++.h>
using namespace std;
class Cricket{
    public:
    int jersey_no;
    string country;
};
int main(){
    Cricket dhoni;
    Cricket kholi;
    dhoni.jersey_no = 18;
    dhoni.country = "India";
    kholi.jersey_no=dhoni.jersey_no;
    kholi.country=dhoni.country;
    cout<<kholi.jersey_no<<" "<<kholi.country<<endl;
    return 0;
}