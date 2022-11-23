#include <iostream>
using namespace std;

int main() {
    int t,w,x,y,z,s=0;
    cin>>t;
    while(t--){
        s=0;
        cin>>w>>x>>y>>z;
        s=w+(x-y)*z;
        cout<<s<<endl;
    }
	return 0;
}
