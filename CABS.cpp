#include <iostream>
using namespace std;

int main() {
	int T,x,y;
	cin>>T;
	while(T--){
	    cin>>x>>y;
	    if(x<y) cout<<"FIRST\n";
	    else if(x>y) cout<<"SECOND\n";
	    else cout<<"ANY\n";
	}
	return 0;
}
