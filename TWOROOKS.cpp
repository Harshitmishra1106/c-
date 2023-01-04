#include <iostream>
using namespace std;

int main() {
	int t,x1,x2,y1,y2;
	cin>>t;
	while(t--){
	    cin>>x1>>x2>>y1>>y2;
	    if(x1==y1||x2==y2) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
