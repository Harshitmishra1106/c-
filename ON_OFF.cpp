#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

auto solve(){
    
    int n;
    cin >> n;
    string state_one, state_two;
    cin >> state_one >> state_two;
    
    int change_in_state = 0;
    
    for(int i=0;i<n;i++){
        if(state_one[i]!=state_two[i]){
            change_in_state++;
        }
    }
    
    int check = change_in_state % 2;
    
    if(check == 0){
        cout << 1 << ln;
    }
    else{
        cout << 0 << ln;
    }
}

int main() {
    fastio;
    int t; cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
