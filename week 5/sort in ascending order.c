//sort in ascending order
#include<stdio.h>

int main()
{
	int n,i,j,k,m;
	
	printf("Enter the number of array :");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	for(j=0;j<n;j++)
    {
    	for(k=0;k<n-1;k++)
    	{
    		if(arr[k]>arr[k+1])
    		{
    			m=arr[k];
    			arr[k]=arr[k+1];
    			arr[k+1]=m;
			}
		}

	}
	printf("sorted arr :");

	for(i=0;i<n;i++)
	printf("%d,",arr[i]);

	return 0;
}
