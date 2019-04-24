/*
* Author: Vaibhav
* Goal: Print matrix in spiral order
* 1 2 3
* 4 5 6
* 7 8 9
* 
* 1 2 3 6 9 8 7 4 5
*/
#include<stdio.h>


void printMatrix(int a[3][3],int n)
{
	int top=0,bottom=n-1,left=0,right=n-1;
	int dir=0;
	while(top<=bottom && left<=right)
	{
		
		for(int i=left;i<=right;i++)
		{	
			printf("%d",a[top][i]);
		}
		top++;


		for(int i=top;i<=bottom;i++)
		{
			printf("%d",a[i][right]);
		}
		right--;


		for(int i=right;i>=left;i--)
		{
			printf("%d",a[bottom][i]);
		}
		bottom--;



		for(int i=bottom;i>=top;i--)
		{
			printf("%d",a[i][left]);
		}
		left++;
		
	}
}
int main()
{
	
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	printMatrix(a,3);
		
}







