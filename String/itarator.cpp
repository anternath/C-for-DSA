#include<bits/stdc++.h>
using namespace std;
int main(){
    string name ="ANTER";
    string :: iterator it;//ekane it ekti private pointer return kore;
    // for(int i=0; i<name.size(); i++){//normarlly itarator.
    //     cout<<name[i]<<endl;
    // }
    cout<<*name.begin()<<endl;//begin() funtion ti pointer ja private address return kore.
    cout<<*(name.end()-1)<<endl;
    cout<<"Itaration by iterator pointer :"<<endl;//alternative for(auto it=name.begin(); it<name.end(); it++);
    for(it=name.begin(); it<name.end(); it++){
        cout<<*it<<endl;
    }
    return 0;
}