#include <iostream>
using namespace std;

int main() {
	int t,a1,b1,c1,t1,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a1>>b1>>c1>>t1>>a>>b>>c;
	    if(a>=a1&&b>=b1&&c>=c1&&(a+b+c)>=t1) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
