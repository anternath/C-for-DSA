#include<bits/stdc++.h>
using namespace std;
namespace Anter{//declare namespace;
    int roll=639192;
    void hello(){
        cout<<"Anter Namespace"<<endl;
    }
}
namespace Ridoy{//namespace hocce onk boro group
    int roll1 = 639193;
    void hello2(){
        cout<<"Ridoy namespace"<<endl;
    }
}
using namespace Anter;//Anter namer namspace ke access kora
using namespace Ridoy;//ridoy namer namespace ke access 
int main(){
    cout<<roll<<endl;//roll print korar por eti prothome dekthche roll name
    //main function e kono variable ache kina.na pawer por ki ki namspace ache 
    //ta check kortche ns std check kore dekteche oikane kono roll namer variable nai
    //tarpor anter namer namspace e dekteche roll name variable ache oita pawer poreo 
    //Ridoy namespace e roll vari ache kina check korche tarpor anter ns er roll print kore diche;
    //jodi onno kono ns e roll vari ti paito sate sate error dito
    hello();//function call namespace teke;
    
    cout<<roll1<<endl;
    Ridoy::hello2();//funtion call specific Ridoy namespace teke
    return 0;
}