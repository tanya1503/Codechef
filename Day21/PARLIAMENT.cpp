#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        double x,y;
        cin>>x>>y;
        if(y>=x/2){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}