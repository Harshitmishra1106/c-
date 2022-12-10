#include <iostream>
using namespace std;

int main() {
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    if(x>=1&&x<100) cout<<"Easy\n";
	    else if(x>=100&&x<200) cout<<"Medium\n";
	    else if(x>=200&&x<=300) cout<<"Hard\n";
	}
	return 0;
}
