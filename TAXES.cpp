#include <iostream>
using namespace std;

int main() {
	int T,x[100],i,a;
	cin>>T;
	for(i=0;i<T;i++) cin>>x[i];
	for(i=0;i<T;i++){
	    if(x[i]>100){
	        a=x[i]-10; cout<<a<<endl;
	    }
	    else cout<<x[i]<<endl;
	}
	return 0;
}
