// insertion sort 
// complexity O(n2 ) but it is better than bublle,selectio sort
#include<stdio.h>
int main()
{
	int n,i,h,v;
	printf("size of array \n");
	scanf("%d",&n);
	printf("Array Element \n");
	int *arr=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		v=arr[i];
		h=i;
		while(h>0 && arr[h-1]>arr[h])
		{
			arr[h]=arr[h-1];
			h--;
		}
		arr[h]=v;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
