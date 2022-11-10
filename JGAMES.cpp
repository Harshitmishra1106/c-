#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if((x+y)%2==0) cout<<"Janmansh\n";
	    else cout<<"Jay\n";
	}
	return 0;
}
