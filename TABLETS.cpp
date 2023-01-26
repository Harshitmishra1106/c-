#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(y==0) cout<<"NO\n";
	    else{
	        if(y>=3*x) cout<<"YES\n";
	        else cout<<"NO\n";
	    }
	}
	return 0;
}
