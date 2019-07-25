//bubble sort O(n2) complexity but effircient than selection sort
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
	for(i=0;i<n-1;i++)
	{
		p=0;
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
		
			//p=1;
			t=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=t;
			}
		}
	//	if(p==0)//no swap is performed
		//{
		//	break;	
		//}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

