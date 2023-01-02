#include <iostream>
using namespace std;

int main() {
	int t,p,m,v;
	cin>>t;
	while(t--){
	    cin>>p>>m>>v;
	    cout<<(m-p+1)*v<<endl;
	}
	return 0;
}
