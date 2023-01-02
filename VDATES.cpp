#include <iostream>
using namespace std;

int main() {
	int t,d,l,r;
	cin>>t;
	while(t--){
	    cin>>d>>l>>r;
	    if(d<l) cout<<"Too Early\n";
	    else if(d>r) cout<<"Too Late\n";
	    else cout<<"Take second dose now\n";
	}
	return 0;
}
