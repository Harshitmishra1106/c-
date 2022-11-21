#include <iostream>
using namespace std;

int main() {
	int t,x,y,z;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    if(x>y&&x>z) cout<<"Setter\n";
	    else if(y>x&&y>z) cout<<"Tester\n";
	    else cout<<"Editorialist\n";
	}
	return 0;
}
