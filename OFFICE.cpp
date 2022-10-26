#include <iostream>
using namespace std;

int main() {
	int T,X[100],Y[100],i,total;
	cin>>T;
	for(i=0;i<T;i++)cin>>X[i]>>Y[i];
	for(i=0;i<T;i++){
	    total=4*X[i]+Y[i];
	    cout<<total<<endl;
	}
	return 0;
}
