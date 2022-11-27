#include <iostream>
using namespace std;

int main() {
	int t,n,x,p,s;
	cin>>t;
	while(t--){
	    cin>>n>>x>>p;
	    s=3*x-(n-x);
	    if(s>=p) cout<<"PASS\n";
	    else cout<<"FAIL\n";
	}
	return 0;
}
