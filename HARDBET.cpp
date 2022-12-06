#include <iostream>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if(b<a&&b<c) cout<<"Bob\n";
	    else if(c<a&&c<b) cout<<"Alice\n";
	    else cout<<"Draw\n";
	}
	return 0;
}
