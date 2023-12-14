#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int X,Y;
        cin>>X>>Y;
        if( X>Y){
            cout<<"loss"<<endl;
        }
        else if (X<Y){
            cout<<"profit"<<endl;
        }
        else if(X=Y){
            cout<<"Neutral"<<endl;
        }
    }
    
}