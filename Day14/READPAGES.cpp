#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        double N,X,Y;
        cin>>N>>X>>Y;
        if(N/Y<=X){
            cout<<"yes"<<endl;


        }
        else{
            cout<<"no"<<endl;
        }
    }
}