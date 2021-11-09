#include<stdio.h>
int linear_search(int[],int,int);
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
	position=linear_search(a,n,key);
	if(position == -1)
	{
	   printf("element not found");
	}
	else
	{
		printf("element found at position %d",position);
	}
}
	int i=0;
	int linear_search(int a[],int n,int key)
	{
		if(a[i]==key)
		{
			return i;
		}
		else if(i<n)
		{
			i++;
			linear_search(a,n,key);
		}
		else
		{
			return -1;
		}
			
	}
//output 1//
enter the size of the array 10
enter the elements of the array
1
2
3
4
5
6
7
8
9
10
enter the element to be searched
5
element found at position 4
  //output 2//
  enter the size of the array 8
enter the elements of the array
1
2
3
4
5
6
7
8
enter the element to be searched
10
element not found
