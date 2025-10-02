#include "abs_min.h"
#include "abs_max.h"
#include "diff.h"
#include "sum.h"



int main(){
       	int znach;
	scanf("%d",&znach);
	int arr[100];
	int n=0;
	for(int i=0; i<100 && scanf("%d",&arr[i])==1;i++){
		n++;
	}
	switch(znach){
		case(0):
			printf("%d\n", abs_max(n, arr));
			break;
		case(1):
			printf("%d\n", abs_min(n, arr));
			break;
		case(2):
			printf("%d\n", diff(n, arr));
			break;
		case(3):
			printf("%d\n", sum(n, arr));
			break;
		default:
			printf("Данные некорректны\n");
	}
	return 0;
}
