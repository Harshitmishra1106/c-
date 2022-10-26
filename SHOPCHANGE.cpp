#include <iostream>
using namespace std;

int main() {
	int T,X[100];
	cin>>T;
	for(int i=0;i<T;i++)cin>>X[i];
	for(int i=0;i<T;i++){
	    int R=100-X[i];
	    cout<<R<<endl;
	}
	return 0;
}
