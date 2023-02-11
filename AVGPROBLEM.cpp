#include <iostream>
using namespace std;

int main() {
    int t;
	float a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if((a+b)/2>c) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
