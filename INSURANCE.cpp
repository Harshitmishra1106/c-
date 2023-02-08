#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(y<=x) cout<<y<<endl;
	    else cout<<x<<endl;
	}
	return 0;
}
