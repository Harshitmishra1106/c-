#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(x>10*y) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
