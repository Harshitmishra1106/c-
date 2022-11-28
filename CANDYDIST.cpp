#include <iostream>
using namespace std;

int main() {
	int t,n,m,a;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    a=n/m;
	    if(n%2==0&&a%2==0&&a*m==n) cout<<"Yes\n";
	    else cout<<"No\n";
	}
	return 0;
}
