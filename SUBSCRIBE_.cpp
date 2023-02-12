#include <iostream>
using namespace std;

int main() {
	int t,n,x;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    if(n%6==0) cout<<x*(n/6)<<endl;
	    else cout<<x*((n/6)+1)<<endl;
	    
	}
	return 0;
}
