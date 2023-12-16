#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int X,Y;
        cin>>X>>Y;
        if(X>Y){
            cout<<X-Y<<endl;

        }
        else if(Y>X){
            cout<<Y-X<<endl;
        }
    }
}