#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--){
        int X,C;
        cin>>X>>C;
        int d=X/6;
        
        int e=X%6;
       
        if (e==0)
        {
            cout<<d*C<<endl;
        }
         
        
        
        else{
            cout<<(d+1)*C<<endl;
        }
        }}
   
