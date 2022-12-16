#include <iostream>
using namespace std;

int main() {
	int t,x,y,p,q;
	cin>>t;
	while(t--){
	    cin>>x>>y>>p>>q;
	    if((x+10*p)>(y+10*q)) cout<<"Chefina\n";
	    else if((x+10*p)<(y+10*q)) cout<<"Chef\n";
	    else cout<<"Draw\n";
	}
	return 0;
}
