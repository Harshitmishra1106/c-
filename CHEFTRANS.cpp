#include <iostream>
using namespace std;

int main() {
	int t,x,y,z;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    if(x+y>z) cout<<"TRAIN\n";
	    else if(x+y<z) cout<<"PLANEBUS\n";
	    else cout<<"EQUAL\n";
	}
	return 0;
}
