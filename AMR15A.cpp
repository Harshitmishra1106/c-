#include <iostream>
using namespace std;

int main() {
	int N,A[100],i,j=0,k=0;
	cin>>N;
	for(i=0;i<N;i++)cin>>A[i];
	for(i=0;i<N;i++){
	    if(A[i]%2==0)j++;
	    else k++;
	}
	if(j>k)cout<<"READY FOR BATTLE";
	else cout<<"NOT READY";
	return 0;
}
