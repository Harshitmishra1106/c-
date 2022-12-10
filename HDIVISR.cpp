#include <iostream>
using namespace std;

int main() {
	int n,i=1,c;
	cin>>n;
	for(i=1;i<=10;i++){
	    if(n%i==0) c=i;
	    else continue;
	}
	cout<<c;
	return 0;
}
