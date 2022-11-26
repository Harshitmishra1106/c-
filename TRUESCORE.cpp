#include <iostream>
using namespace std;

int main() {
	int t,a,b,c,d;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c>>d;
	    if(a<=c&&b<=d) cout<<"POSSIBLE\n";
	    else cout<<"IMPOSSIBLE\n";
	}
	return 0;
}
