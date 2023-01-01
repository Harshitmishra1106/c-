#include <iostream>
using namespace std;

int main() {
	int t,x,y,a,b,k;
	cin>>t;
	while(t--){
	    cin>>x>>y>>a>>b>>k;
	    if((x+k*a)<(y+k*b)) cout<<"PETROL\n";
	    else if((x+k*a)>(y+k*b)) cout<<"DIESEL\n";
	    else cout<<"SAME PRICE\n";
	}
	return 0;
}
