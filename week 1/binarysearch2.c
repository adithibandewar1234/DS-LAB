#include<stdio.h>
int binary_search(int[],int,int,int);
int main()
{
	int a[50],n,position,key,i;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the elements of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched\n");
	scanf("%d",&key);
	position=binary_search(a,0,n-1,n);
	if(position == -1)
	{
	   printf("element not found");
	}
	else
	{
		printf("element found at position %d",position);
	}
}
int binary_search(int a[],int begining,int end,int ele)
{
	int mid;
		mid=begining+end/2;
	if(ele==a[mid])
		return mid;
	else if (begining>end)
	return -1;
	else if(ele>a[mid])
		binary_search(a,mid+1,end,ele);
	else if(ele<a[mid])
		binary_search(a,begining,mid-1,ele);
	
}
//output 1//
enter the size of the array 10
enter the elements of the array
2
4
6
8
10
15
18
20
25
28
enter the element to be searched
20
//output 2//
enter the size of the array 5
enter the elements of the array
1
2
3
4
5
enter the element to be searched
9
element not found
