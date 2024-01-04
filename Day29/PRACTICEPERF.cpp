#include <iostream>
using namespace std;

int main() {
    int  a[4], cnt=0;
    for ( int i=0; i<4;++i)
    { 
        cin>>a[i];
    }
    for ( int i=0;i<4;++i)
    {
        if(a[i]>=10)
        cnt++;
    }
    cout<<cnt<<endl;
	// your code goes here
	return 0;
}
