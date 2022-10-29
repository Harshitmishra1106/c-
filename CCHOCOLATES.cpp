#include <iostream>
using namespace std;

int main() {
	int T,x,y,z,s;
	cin>>T;
	while(T--){
	    cin>>x>>y>>z;
	    s=(5*x+10*y);
	    if(z<=s) cout<<s/z<<endl;
	    else cout<<"0\n";
	}
	return 0;
}
