#include <iostream>
using namespace std;

int main() {
	int t,x,y,m;
	cin>>t;
	while(t--){
	    cin>>x>>y>>m;
	    if(x*m<y) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
