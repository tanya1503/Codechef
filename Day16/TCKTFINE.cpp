#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        int p;
        int Q;
        cin>>x>>p>>Q;
        cout<<(p-Q)*x<<endl;
    }
}