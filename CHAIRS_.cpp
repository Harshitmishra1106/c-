#include <iostream>
using namespace std;

int main() {
	int T,x,y,i;
	cin>>T;
	while(T--){
	    cin>>x>>y;
	    if((x-y)>0) cout<<x-y<<endl;
	    else cout<<"0"<<endl;
	}
	return 0;
}
