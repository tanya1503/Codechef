#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int X,Y,M;
        cin>>X>>Y>>M;
        int a=X*M;
        if (a<Y)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}