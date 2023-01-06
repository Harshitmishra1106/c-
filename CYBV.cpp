#include <iostream>
using namespace std;

int main() {
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    if(k<n) cout<<"0"<<endl;
	    else cout<<k/n<<endl;
	}
	return 0;
}
