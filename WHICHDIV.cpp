#include <iostream>
using namespace std;

int main() {
	int t,rate;
	cin>>t;
	while(t--){
	    cin>>rate;
	    if(rate<1600) cout<<"3\n";
	    else if(rate>=1600&&rate<2000) cout<<"2\n";
	    else cout<<"1\n";
	}
	return 0;
}
