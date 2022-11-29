#include <iostream>
using namespace std;

int main() {
	int t,x,y,d,diff;
	cin>>t;
	while(t--){
	    cin>>x>>y>>d;
	    diff=abs(x-y);
	    if(diff<=d) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
