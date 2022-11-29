#include <iostream>
using namespace std;

int main() {
	int t;
	float a,x,b,y;
	cin>>t;
	while(t--){
	    cin>>a>>x>>b>>y;
	    if(a/x > b/y) cout<<"Alice\n";
	    else if(a/x < b/y) cout<<"Bob\n";
	    else cout<<"Equal\n";
	        
	}
	return 0;
}
