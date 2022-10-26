#include <iostream>
using namespace std;

int main() {
	int T,X[10];
	cin>>T;
	for(int i=0;i<T;i++)cin>>X[i];
	for(int i=0;i<T;i++){
	    if((X[i]+3)<=10)cout<<"Yes\n";
	    else cout<<"No\n";
	}
	return 0;
}
