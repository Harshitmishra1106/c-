#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x;
	    y=x%4;
	    if(y==1) cout<<"East\n";
	    else if(y==2) cout<<"South\n";
	    else if(y==3) cout<<"West\n";
	    else if(y==0) cout<<"North\n";
	}
	return 0;
}
