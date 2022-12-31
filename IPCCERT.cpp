#include <iostream>
using namespace std;

int main() {
	int N,M,K,i,j;
	cin>>N>>M>>K;
	int T[N][K],Q[N],s[N],c=0;
	for(i=0;i<N;i++){
	    s[i]=0;
	   for(j=0;j<K;j++){
	       cin>>T[i][j];
	       s[i]=s[i]+T[i][j];
	   } 
	   cin>>Q[i];
	}
	for(i=0;i<N;i++){
	    if(s[i]>=M && Q[i]<=10) c++;
	    else c=c; 
	}
	cout<<c;
	
	return 0;
}
