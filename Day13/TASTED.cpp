#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int a,b;
        a=x*2;
        b=y*5;
        if(a>b){
            cout<<"choclate"<<endl;
        }
        else if(a<b){
            cout<<"candy"<<endl;

        }
        else if(a==b){
            cout<<"either"<<endl;
        }
    }
}