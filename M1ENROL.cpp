#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if((x-y)<0)
	    cout<<abs(x-y)<<endl;
	    else
	    cout<<0<<endl;
	}
	return 0;
}
