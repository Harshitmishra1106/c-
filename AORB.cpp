#include <iostream>
using namespace std;

int main() {
	int t,x,y,s0,s1;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    s0=(500-2*x)+(1000-4*(x+y));
	    s1=(1000-4*y)+(500-2*(x+y));
	    if(s0>=s1) cout<<s0<<endl;
	    else cout<<s1<<endl;
	}
	return 0;
}
