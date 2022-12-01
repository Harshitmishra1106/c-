#include <iostream>
using namespace std;
int fact(int n){
    if(n==0||n==10) return 1;
    else return n*fact(n-1);
}
int main() {
	int t,n,c;
	cin>>t;
	while(t--){
	    cin>>n;
	    c=fact(n);
	    cout<<c<<endl;
	}
	return 0;
}
