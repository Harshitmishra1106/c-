#include <iostream>
using namespace std;

int main() {
	int t,pa,pb,pc;
	cin>>t;
	while(t--){
	    cin>>pa>>pb>>pc;
	    if((pa+pc)<pb)
	    cout<<pb<<endl;
	    else cout<<pa+pc<<endl;
	}
	return 0;
}
