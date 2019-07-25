//selection sort worst case complexity O(n2)
#include<stdio.h>
int main()
{
	int n,i,t,p=0,j;
	printf("enter size of array \n");
	scanf("%d",&n);
	int *arr=(int *)malloc(n*sizeof(int));
	printf("Enter Element \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
