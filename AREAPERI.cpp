#include <iostream>
using namespace std;

int main() {
	int l,b;
	cin>>l>>b;
	if(2*(l+b)>l*b) cout<<"Peri\n"<<2*(l+b)<<endl;
	else if(2*(l+b)<l*b) cout<<"Area\n"<<l*b<<endl;
	else cout<<"Eq\n"<<l*b<<endl;
	return 0;
}
