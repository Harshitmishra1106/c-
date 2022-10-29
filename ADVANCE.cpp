#include <iostream>
using namespace std;

int main() {
	int T,x,y;
	cin>>T;
	while(T--){
	    cin>>x>>y;
	    if(y<=x+200&&y>x) cout<<"YES\n";
	    else if(y==x) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
