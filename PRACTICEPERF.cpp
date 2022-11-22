#include <iostream>
using namespace std;

int main() {
	int p[4],i,k=0;
	for(i=0;i<4;i++) cin>>p[i];
	for(i=0;i<4;i++){
	    if(p[i]>=10) k++;
	}
	cout<<k;
	return 0;
}
