#include <iostream>
using namespace std;

int main() {
	int t,x,y,X,Y,d;
	cin>>t;
	while(t--){
	    cin>>x>>y>>X>>Y>>d;
	    if((x/X)>=d&&(y/Y)>=d) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
