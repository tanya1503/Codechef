#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x<3){
            cout<<"Light"<<endl;
        }
        else if(x>=3 && x<7){
            cout<<"moderate"<<endl;
        }
        else if(x>=7){
            cout<<"Heavy"<<endl;
        }
    }
}