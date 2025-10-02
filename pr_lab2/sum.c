#include<stdlib.h>
#include "abs_max.h"
#include "sum.h"
int sum(int n, int arr[]){
	int maxi=abs_max(n, arr);
	int sumik=0;
	int flagg=0;
	for(int i=0; i<n; i++){
		if (abs(arr[i])==abs(maxi) && !flagg){
			sumik+=arr[i];
			flagg=1;
		}else if(flagg){
			sumik+=arr[i];
		}
	}
	return sumik;
}
