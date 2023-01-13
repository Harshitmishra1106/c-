#include <iostream>
using namespace std;

int main() {
    int t,n,i,j,k=0,c=0,l=0;
    cin>>t;
    while(t--){
        cin>>n;
        int a[2*n];
        for(i=0;i<2*n;i++) cin>>a[i];
        for(i=0;i<2*n;i++){
            c=0;
            l=0;
            for(j=0;j<2*n;j++){
                if(a[i]==a[j]) c++;
                else continue;
            }
            if(c<=2){
                k++;
                continue;
            } 
            else{
                cout<<"NO\n";
                l++;
                break;
            }
        }
        if(k>0&&l==0) cout<<"YES\n";
        
    }
	return 0;
}
