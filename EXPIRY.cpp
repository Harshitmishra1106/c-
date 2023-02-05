#include <iostream>
using namespace std;

int main() {
	int t,n,m,k;
	cin>>t;
	while(t--){
	    cin>>n>>m>>k;
	    if(n<=m*k) cout<<"Yes\n";
	    else cout<<"No\n";
	}
	return 0;
}
