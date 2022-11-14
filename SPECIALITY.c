#include <stdio.h>

int main(void) {
	int T,X[10000][3],i,j;
	scanf("%d",&T);
	for(i=0;i<T;i++){
	for(j=0;j<3;j++){
	    scanf("%d",&X[i][j]);
	}
	}
	for(i=0;i<T;i++){
	    for(j=0;j<3;j++){
	        if(X[i][j]<=100&&X[i][j]>=1){
	            if(X[i][0]>X[i][1]&&X[i][0]>X[i][2]){
	            printf("Setter\n");
	            break;
	            }
	            else if(X[i][1]>X[i][0]&&X[i][1]>X[i][2]){
	             printf("Tester\n");  
	             break;
	            }
	            else{
	            printf("Editorialist\n");
	            break;
	            }
	        }
	    }
	}
	return 0;
}

