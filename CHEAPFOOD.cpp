#include <iostream>
using namespace std;

int main() {
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    if((x/10)>=100) cout<<x/10<<endl;
	    else cout<<100<<endl;
	}
	return 0;
}
