#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int N,X,Y;
        cin>>N>>X>>Y;
        int A;
        A=(X*1)+(Y*2);
        if (A>N)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
        
    }
}