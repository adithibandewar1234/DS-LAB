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
	int linear_search(int a[],int n,int key)
	{
		int i;
		for(i=0;i<n;i++)
		{
			if(key ==a[i])
			{
				return i;
		    }
		}
		return -1;
	}
//output 1//
enter the size of the array 10
enter the elements of the array 
0
1
2
3
4
5
6
7
8
9
enter the element to be searched
3
element found at position 3
 //output 2//
  enter the size of the array 10
enter the elements of the array
0
1
2
3
4
5
6
7
8
9
enter the element to be searched
11
element not found
