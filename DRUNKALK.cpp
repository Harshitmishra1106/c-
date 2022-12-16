#include <iostream>
using namespace std;

int main() {
	int t,k;
	cin>>t;
	while(t--){
	    cin>>k;
	    if(k%2==0) cout<<k<<endl;
	    else cout<<k+2<<endl;
	}
	return 0;
}
