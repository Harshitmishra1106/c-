#include <iostream>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    if((a+b)/2<35||(b+c)/2<35||(a+c)/2<35) cout<<"Fail\n";
	    else cout<<"Pass\n";
	}
	return 0;
}
