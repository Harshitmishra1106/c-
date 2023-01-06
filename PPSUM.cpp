#include <iostream>
using namespace std;
int sum(int d,int n){
    int s=0,i;
    while(d--){
        s=0;
        for(i=1;i<=n;i++) s=s+i;
        n=s;
    }
    return s;
}
int main() {
	int t,d,n;
	cin>>t;
	while(t--){
	    cin>>d>>n;
	    cout<<sum(d,n)<<endl;
	}
	return 0;
}
