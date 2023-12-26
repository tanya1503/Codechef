#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x==y && x==0){
            cout<<"no"<<endl;
        }
        else if(x==y){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }

}

 