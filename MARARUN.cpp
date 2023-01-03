#include <iostream>
using namespace std;

int main() {
	int t,D,d,a,b,c;
	cin>>t;
	while(t--){
	    cin>>D>>d>>a>>b>>c;
	    if(D*d>=10&&D*d<21) cout<<a<<endl;
	    else if(D*d>=21&&D*d<42) cout<<b<<endl;
	    else if(D*d>=42) cout<<c<<endl;
	    else cout<<0<<endl;
	}
	return 0;
}
