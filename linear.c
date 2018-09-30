#include<stdio.h>
int main()
{
	int arr[]={4,8,2,9,6};
	//we have taken the array of 5 elements 
	//trying to search sequiantially through it
	int n=5;
	//tying to search the 5 is present or not
	int flag=0;
	for( i = 1; i <= 5; i++) {
		if(arr[i] == n)
		{
			flag=1;
			break;
		}
		
	}
	if(flag==1)
		printf("element found");
	else
		printf("element not found");
	return 0;
}
		
	
