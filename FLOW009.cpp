#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	int t;
	float quantity,price;
	cin>>t;
	while(t--){
	    cin>>quantity>>price;
	    if(quantity>1000) cout<<setprecision(7)<<(0.9)*quantity*price<<endl;
	    else cout<<setprecision(7)<<quantity*price<<endl;
	}
	return 0;
}
