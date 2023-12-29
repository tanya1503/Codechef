#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,z;
        cin>>x>>z;
        if(x<=z){
            cout<<z<<endl;
        }
        else{
            cout<<z+(x-z)*2<<endl;
        }
    }

}