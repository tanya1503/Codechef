#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C;
        cin>>A>>B>>C;
        if (A>B && A>C)
        {
            cout<<"Alice"<<endl;
        }
        else if(B>A && B>C){
            cout<<"BOB"<<endl;
        }
        else if(C>A && C>B){
            cout<<"Charlie"<<endl;
        }
        
    }
}