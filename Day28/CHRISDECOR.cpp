#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        if(x>=n || n*3<=y || n*2<=x){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}