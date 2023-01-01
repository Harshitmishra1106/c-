#include <iostream>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if((a+b+c)==1||(a+b+c)==2) cout<<1<<endl;
	    else cout<<0<<endl;
	}
	return 0;
}
