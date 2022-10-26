#include <iostream>
using namespace std;

int main() {
	int T,X[100],Y[100],i,S;
	cin>>T;
	for(i=0;i<T;i++)cin>>X[i]>>Y[i];
	for(i=0;i<T;i++){
	    S=10*X[i]+5*Y[i];
	    cout<<S<<endl;
	}
	return 0;
}
