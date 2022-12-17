#include <iostream>
using namespace std;

int main() {
	int t;
	float x1,x2,x3,v1,v2;
	cin>>t;
	while(t--){
	    cin>>x1>>x2>>x3>>v1>>v2;
	    if(abs(x1-x3)/v1<abs(x2-x3)/v2) cout<<"Chef\n";
	    else if(abs(x1-x3)/v1>abs(x2-x3)/v2) cout<<"Kefa\n";
	    else cout<<"Draw\n";
	}
	return 0;
}
