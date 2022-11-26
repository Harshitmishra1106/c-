#include <iostream>
using namespace std;

int main() {
	int t,p1,p2,q1,q2,a,b;
	cin>>t;
	while(t--){
	    cin>>p1>>p2>>q1>>q2;
	    if(p1>=p2) a=p1;
	    else if(p1<p2) a=p2;
	    if(q1>=q2) b=q1;
	    else if(q1<q2) b=q2;
	    
	    if(a>b) cout<<"Q\n";
	    else if(a<b) cout<<"P\n";
	    else cout<<"TIE\n";
	}
	return 0;
}
