#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int X;
        cin>>X;
        int a;
        a=X*4;
        if (a>1000)
        {
            cout<<"NO"<<endl;
        }
        else if(a<=1000){
            cout<<"yes"<<endl;
        }
        
    }
}