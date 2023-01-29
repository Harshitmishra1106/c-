#include <iostream>
using namespace std;

int main() {
	int t,a,b,c,d,k=0,l=0,j,n=0,x[100],i;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c>>d;
	    n=0;
	    k=0;
	    l=0;
	    for(i=a;i<=b;i++){
	        x[k]=i;
	        k++;
	    }
	    for(i=c;i<=d;i++){
	        l=0;
	        for(j=0;j<k;j++){
	            if(i!=x[j]) l++;
	            else l=l;
	        }
	        if(l==k) n++;
	        else n=n;
	    }
	    cout<<k+n<<endl;
	}
	return 0;
}
