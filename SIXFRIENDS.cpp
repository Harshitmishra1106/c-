#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(3*x<=2*y) cout<<3*x<<endl;
	    else if(3*x>2*y) cout<<2*y<<endl;
	}
	return 0;
}
