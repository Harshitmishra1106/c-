#include <iostream>
using namespace std;

int main() {
    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(a>b&&a>c) cout<<"Alice\n";
        else if(b>a&&b>c) cout<<"Bob\n";
        else cout<<"Charlie\n";
    }
	return 0;
}
