#include <iostream>
using namespace std;

int main() {
	int t,a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    
	     if((b-a)%3==0 || (b-a)%3==1) cout<<"YES\n";
	     else cout<<"NO\n";
	   
	    
	}
	return 0;
}
