#include <iostream>
using namespace std;

int main() {
	int t,Time[60];
	cin>>t;
	for(int i=0;i<t;i++)
	cin>>Time[i];
	for(int i=0;i<t;i++){
	    if((Time[i]-30)>=0)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
