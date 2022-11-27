#include <iostream>
using namespace std;

int main() {
	int t;
	float a,x,b,y;
	cin>>t;
	while(t--){
	    cin>>a>>b>>x>>y;
	    if(a/x<b/y) cout<<"Chef\n";
	    else if(a/x>b/y) cout<<"Chefina\n";
	    else cout<<"Both\n";
	}
	return 0;
}
