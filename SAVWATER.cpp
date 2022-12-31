#include <iostream>
using namespace std;

int main() {
	int t,H,x,y,C;
	cin>>t;
	while(t--){
	    cin>>H>>x>>y>>C;
	    if(H*(x+y/2)<=C) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
