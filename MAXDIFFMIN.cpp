#include <iostream>
using namespace std;

int main() {
	int T,A[10],B[10],C[10],i,max,min;
	cin>>T;
	for(i=0;i<T;i++) cin>>A[i]>>B[i]>>C[i];
	for(i=0;i<T;i++){
	    if(A[i]>B[i]&&A[i]>C[i]) max=A[i];
	    else if(B[i]>C[i]&&B[i]>A[i]) max=B[i];
	    else if(C[i]>A[i]&&C[i]>B[i])max=C[i];
	    if(A[i]<B[i]&&A[i]<C[i]) min=A[i];
	    else if(B[i]<C[i]&&B[i]<A[i]) min=B[i];
	    else if(C[i]<A[i]&&C[i]<B[i]) min=C[i];
	 cout<<max-min<<endl;   
	}
	return 0;
}
