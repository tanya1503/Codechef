#include<iostream>
using namespace std;
int main(){
    int X;
    cin>>X;
    if(X<3){
        cout<<"Gold"<<endl;
    }
    else if(6>X || X<=3){
        cout<<"Silver"<<endl;
    }
    else if(X==6){
        cout<<"Bronze"<<endl;
    }
    else if (X>6){
        cout<<"bronze"<<endl;
    }



}