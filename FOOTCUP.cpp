#include <iostream>
using namespace std;

int main() {
	int T,x,y;
	cin>>T;
	while(T--){
	    cin>>x>>y;
	    if(x==y&&x!=0) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
