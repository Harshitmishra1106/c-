#include <iostream>
using namespace std;

int main() {
	int T,c;
	cin>>T;
	while(T--){
	    cin>>c;
	    if(c>20) cout<<"HOT\n";
	    else cout<<"COLD\n";
	}
	return 0;
}
