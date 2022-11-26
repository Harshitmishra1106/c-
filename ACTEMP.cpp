#include <iostream>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if(b>=a&&b>=c) cout<<"Yes\n";
	    else cout<<"No\n";
	}
	return 0;
}
