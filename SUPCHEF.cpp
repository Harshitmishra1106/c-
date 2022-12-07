#include <iostream>
using namespace std;

int main() {
	int t,n,m,k;
	cin>>t;
	while(t--){
	    cin>>m>>n>>k;
	    if(m<=n*k) cout<<"NO\n";
	    else cout<<"YES\n";
	}
	return 0;
}
