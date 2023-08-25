#include<stdio.h>
int main(){
	int numCount,i;
	printf("Enter the number of elements: ");
	scanf("%d",&numCount);
	printf("Enter %d numbers:\n",numCount);
	for(i=0;i<numCount;i++){
		int num;
		scanf("%d",&num);
		if(num%2==0){
			printf("%d is even\n",num);
		}
		else{
			printf("%d is odd\n",num);
		}
	}
	return 0;
}
