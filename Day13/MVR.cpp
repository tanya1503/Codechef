#include<iostream>
using namespace std;
int main(){
    int A,B,X,Y;
    cin>>A>>B>>X>>Y;
    int C,Z;
    C=(A*2)+B;
    Z=(X*2)+Y;
    if(C>Z){
        cout<<"Messi"<<endl;
    }
    else if(C<Z){
        cout<<"Ronaldo"<<endl;
    }
    else{
        cout<<"Equal"<<endl;
    }
}