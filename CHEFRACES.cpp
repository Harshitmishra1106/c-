#include <iostream>
using namespace std;
int main() {
	int t,x,y,a,b,c=0;
	cin>>t;
	while(t--){
	    c=0;
	    cin>>x>>y>>a>>b;
	    if(x==a) c++;
	    if(x==b) c++;
	    if(y==a) c++;
	    if(y==b) c++;
	    cout<<2-c<<endl;
	}
	return 0;
}
