/*
 * 1.c
 *
 *  Created on: 2023年5月29日
 *      Author: rd334
 */
#include<stdio.h>
int main(){
	Stack s;
	int(&s,10);

	push(&s,5);
	push(&s,3);
	push(&s,2);

	int x = pop(&s);
	printf("%d\n",x);
	x = pop(&s);
	printf("%d\n",x);

	push(&s,10);
	x = pop(&s);
	printf("%d\n",x);

	destroy(&s);


	int arr[5] = {1,2,3,4,5};
	int brr[5] = {5,4,3,1,2};
	if(isOutOfStack(arr,brr,5)){
		printf("是\n");
	}else{
		printf("否\n");
	}
	return 0;
}



