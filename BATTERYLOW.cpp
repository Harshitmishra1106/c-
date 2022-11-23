#include <iostream>
using namespace std;

int main() {
    int t,chrg;
    cin>>t;
    while(t--){
        cin>>chrg;
        if(chrg>15) cout<<"No\n";
        else cout<<"Yes\n";
    }
	return 0;
}
