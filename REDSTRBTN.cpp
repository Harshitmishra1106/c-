#include <iostream>
using namespace std;

int main() {
	int t,x,y,z,s=0;
	cin>>t;
	while(t--){
	    s=0;
	    cin>>x>>y>>z;
	    s=x+y+z;
	    if(s>=6) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
