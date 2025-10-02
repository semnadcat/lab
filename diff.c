#include "abs_max.h"
#include "abs_min.h"
#include "diff.h"
int diff(int n, int arr[]){
	return abs_max(n,arr)-abs_min(n,arr);
}
