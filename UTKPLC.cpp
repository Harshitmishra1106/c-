#include <iostream>
using namespace std;

int main() {
	int t;
	char a,b,c,x,y;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c>>x>>y;
	    if(x==a||y==a) cout<<a<<endl;
	    else cout<<b<<endl;
	    
	}
	return 0;
}
