#include <iostream>
using namespace std;

int max(int x0,int y0){
    if(x0>=y0) return x0;
    else return y0;
}
int main() {
	int t,x1,x2,y1,y2,x0,y0;
	cin>>t;
	while(t--){
	    cin>>x1>>y1>>x2>>y2;
	    x0=abs(x1-x2);
	    y0=abs(y1-y2);
	    
	    cout<<max(x0,y0)<<endl;
	}
	return 0;
}
