#include<iostream>
using namespace std;
int main(){
    int X,Y;
    cin>>X>>Y;
    if(X<Y){
        cout<<"old"<<endl;
    }
    else if(X>Y){
        cout<<"new"<<endl;
    }
    else{
        cout<<"same"<<endl;
    }
}