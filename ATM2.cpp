#include <iostream>
using namespace std;

int main() {
    int t,n,k,a[100],i;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            if(k-a[i]>=0){
                k=k-a[i];
                cout<<"1";
            }
            else cout<<0;
        }
        cout<<"\n";
    }
    return 0;
}
