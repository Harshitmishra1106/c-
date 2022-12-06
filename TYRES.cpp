#include <iostream>
using namespace std;

int main() {
	int t,n,a;
	cin>>t;
	while(t--){
	    cin>>n;
	    a=n/4;
	    if((n-4*a)>0) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
