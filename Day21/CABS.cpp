#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x>y){
            cout<<"second"<<endl;
        }
        else if(x<y){
            cout<<"first"<<endl;
        }
        else{
            cout<<"any"<<endl;
        }
    }
}