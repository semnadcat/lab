#include<stdlib.h>
#include "abs_max.h"
int abs_max(int n, int arr[]){
	int maxi=(arr[0]);
	for(int i=1; i<n; i++){
		if (abs(arr[i])>abs(maxi)){
			maxi=(arr[i]);
		}
	}
	return maxi;
}
