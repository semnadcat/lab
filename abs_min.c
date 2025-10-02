#include<stdlib.h>
#include "abs_min.h"
int abs_min(int n, int arr[]){
	int mini=(arr[0]);
	for(int i=1; i<n; i++){
		if (abs(arr[i])<abs(mini)){
			mini=(arr[i]);
		}
	}
	return mini;
}
