#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x<=70){
            cout<<0<<endl;
        }
        else if(x<=100 && x>70){
            cout<<500<<endl;
        }
        else if(x>100){
            cout<<2000<<endl;
        }
    }
}