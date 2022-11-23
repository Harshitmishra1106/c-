#include <iostream>
using namespace std;

int main() {
    int t,w,x,y,z,chng=0;
    cin>>t;
    while(t--){
        chng=0;
        cin>>w>>x>>y>>z;
        chng=w+y*z;
        if(chng==x) cout<<"filled\n";
        else if(chng<x) cout<<"Unfilled\n";
        else cout<<"overFlow\n";
    }
	return 0;
}
