#include <iostream>
using namespace std;

int main() {
	int T,X[100],Y[100],i,j=0;
	cin>>T;
	for(i=0;i<T;i++)cin>>X[i]>>Y[i];
	for(i=0;i<T;i++){
	    j=X[i]*Y[i]/100;
	    cout<<j<<endl;
	}
	return 0;
}
