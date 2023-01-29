#include <iostream>
using namespace std;

int main() {
	int t,n,budget,p[100],w[100],h[100],pointer,i,k=0;
	cin>>t;
	while(t--){
	    k=0;
	    cin>>n>>budget;
	    int area[n];
	    for(i=0;i<n;i++){
	        cin>>w[i]>>h[i]>>p[i];
	        if(p[i]<=budget){
	            area[k]=w[i]*h[i];
	            k++;
	        } 
	        else continue;
	    }
	    if(k==0){
	        cout<<"no tablet\n";
	    }
	    else{
	    pointer=area[0];
	    for(i=0;i<k;i++){
	        if(pointer<area[i]) pointer=area[i];
	        else pointer =pointer;
	    }
	    cout<<pointer<<endl;
	    }
	}
	return 0;
}
