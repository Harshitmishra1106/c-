#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(100*x<10*y) cout<<"Disposable\n";
	    else cout<<"Cloth\n";
	}
	return 0;
}
