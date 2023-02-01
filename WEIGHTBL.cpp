#include <iostream>
using namespace std;

int main() {
	int t,w1,w2,x1,x2,m,diff;
	cin>>t;
	while(t--){
	    cin>>w1>>w2>>x1>>x2>>m;
	    diff=w2-w1;
	    if(diff>=(m*x1)&&diff<=(m*x2)) cout<<"1\n";
	    else cout<<"0\n";
	}
	return 0;
}
