#include<stdio.h>
int binary_search(int[],int,int);
int main()
{
	int a[10],key,n,i,position;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the elements of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched\n");
	scanf("%d",&key);
	position=binary_search(a,n,key);
	if(position == -1)
	{
	   printf("element not found");
	}
	else
	{
		printf("element found at position %d",position);
	}
}
int binary_search(int a[],int n,int key)
{
	int first=0,last=n-1,mid;
	while(first<=last)
	{
		mid=first+last/2;
		if(key<a[mid])
		{
		  last=mid-1;	
		}
		else if(key>a[mid])
		{
			first=mid+1;
		}
		else 
			return mid;
	}
	return -1;
}
//output 1//
enter the size of the array 8
enter the elements of the array
3
9
21
25
28
30
35
40
enter the element to be searched
25
element found at position 3
  //ouyput 2//
  enter the size of the array 10
enter the elements of the array
2
4
6
8
12
14
16
18
20
22
enter the element to be searched
3
element not found
	
	
