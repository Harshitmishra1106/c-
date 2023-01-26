#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    if(n<=300) cout<<"3000\n";
	    else{
	        cout<<3000+(n-300)*10<<endl;
	    }
	}
	return 0;
}
