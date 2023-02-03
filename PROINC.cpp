#include <iostream>
using namespace std;

int main() {
	int t,x,y,cost,netprofit;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    cost=abs(x-y);
	    netprofit=(1.1)*x-cost;
	    cout<<netprofit<<endl;
	}
	return 0;
}
