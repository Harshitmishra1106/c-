#include <iostream>
using namespace std;

int main() {
	int t,x,y,z;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    if(z%x==0&&z%y==0) cout<<"ANY\n";
	    else if(z%x==0&&z%y!=0) cout<<"CHICKEN\n";
	    else if(z%x!=0&&z%y==0) cout<<"DUCK\n";
	    else cout<<"NONE\n";
	}
	return 0;
}
