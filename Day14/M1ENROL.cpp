#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int X,Y;
        cin>>X>>Y;
        cout<<Y-X<<endl;
        if(Y-X<0){
            cout<<0<<endl;
        }
    }
}