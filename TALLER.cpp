#include <iostream>
using namespace std;

int main() {
	int t,X[1000],Y[1000];
	cin>>t;
	for(int i=0;i<t;i++)
	cin>>X[i]>>Y[i];
	for(int i=0;i<t;i++){
	    if(X[i]!=Y[i]){
	        if(X[i]>Y[i])cout<<"A\n";
	        else cout<<"B\n";
	    }
	}
	return 0;
}
