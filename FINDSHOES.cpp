#include <iostream>
using namespace std;

int main() {
	int t,n,m;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    if(m>=n) cout<<n<<endl;
	    else cout<<2*n-m<<endl;
	}
	return 0;
}
