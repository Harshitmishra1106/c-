#include <iostream>
using namespace std;

int main() {
	int t,n,x;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	   if(n>=3*x) cout<<n/(3*x)<<endl;
	   else cout<<"0"<<endl;
	}
	return 0;
}
