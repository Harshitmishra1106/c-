#include <iostream>
using namespace std;

int main() {
	int t,n,x,y;
	cin>>t;
	while(t--){
	    cin>>n>>x>>y;
	    if((n+1)*y>=x) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
