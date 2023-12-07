#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        int X,Y;
        cin>>X>>Y;
        int a=X*Y;
        // cout<<a;
        float Z;

        
        cin>>Z;
        float b=Z/a;
        // cout<<b;
        float c=b*100;
       
        // cout<<c<<endl;
        if(c>50){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


        

        }}