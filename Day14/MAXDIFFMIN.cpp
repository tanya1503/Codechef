#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C;
        cin>>A>>B>>C;
        if (A>B>C && A<C<B){
           
          cout<<A-B<<endl;
        }}}
//         else if(A>B && A>C && C<A && C<B){
//             cout<<A-C<<endl;
//         }
//         else if(B>A && B>C && A<C && A<B){
//             cout<<B-A<<endl;
//         }
//         else if(C>A && C>B && B<A && B<C){
//             cout<<C-A<<endl;
//         }

//     }
// }