#include<stdio.h>
#define n 5
int main()
{
	int a[10],i,j,temp;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	j = 0;
for(i = 0; i < n; i++)
{
if(a[i] < 0)					//1)Declare an array and input the array elements.
{								  //2)Start traversing the array and if the current element is negative,swap the current element with the first positive element and continue traversing until all the elements have been encountered.
if(i != j)						 // 3)Print the rearranged array.
{
int temp = a[i];
a[i] = a[j];
a[j] = temp;
}
j++;
}
}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
