#include <iostream>
using namespace std;

int main() {
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    if(n%k==0) cout<<n/k<<endl;
	    else cout<<"-1\n";
	}
	return 0;
}
