#include <iostream>
using namespace std;

int main() {
	int t,a1,a2,a3,b1,b2,b3;
	cin>>t;
	while(t--){
	    cin>>a1>>a2>>a3>>b1>>b2>>b3;
	    if((a1+a2+a3)==(b1+b2+b3)) cout<<"Pass\n";
	    else cout<<"Fail\n";
	}
	return 0;
}
