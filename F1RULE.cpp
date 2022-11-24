#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(100*y<=107*x) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
