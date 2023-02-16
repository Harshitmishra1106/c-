#include <iostream>
using namespace std;

int main() {
	int t,x,y,z;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    if(y<=10*x) cout<<y*z<<endl;
	    else cout<<10*x*z<<endl;
	}
	return 0;
}
