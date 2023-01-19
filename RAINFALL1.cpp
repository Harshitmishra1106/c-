#include <iostream>
using namespace std;

int main() {
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    if(x<3) cout<<"LIGHT\n";
	    else if(x>=3&&x<7) cout<<"MODERATE\n";
	    else if(x>=7) cout<<"HEAVY\n";
	}
	return 0;
}
