#include <iostream>
using namespace std;

int main() {
	int t,m,h,b;
	cin>>t;
	while(t--){
	    cin>>m>>h;
	    b=m/(h*h);
	    if(b<=18) cout<<"1\n";
	    else if(b>=19&&b<=24) cout<<"2\n";
	    else if(b>=25&&b<=29) cout<<"3\n";
	    else if(b>=30) cout<<"4\n";
	}
	return 0;
}
