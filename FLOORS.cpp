#include <iostream>
using namespace std;

int main() {
	int t,x,y,a,b,i;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    for(i=1;i<=10;i++){
	        if(x>=(10*i)-9&&x<=10*i) a=i;
	        if(y>=(10*i)-9&&y<=10*i) b=i;
	    }
	    cout<<abs(a-b)<<endl;
	}
	return 0;
}
