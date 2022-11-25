#include <iostream>
using namespace std;

int main() {
	int t,x,y,z;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    if(x%y==0) cout<<z*x/y<<endl;
	    else cout<<(x/y+1)*z<<endl;
	}
	return 0;
}
