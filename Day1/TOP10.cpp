#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        int x;
        cin>>x;
        if(x<=10){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}