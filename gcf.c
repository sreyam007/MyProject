#include <stdio.h>

int main() {
	int n,i,j,min,gcd,flag;
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	min=arr[0];
	for (i=1;i<n;i++)
	    if(min>arr[i])
	      min=arr[i];
	for(i=min;i>0;i--)
	{
	    for(j=0;j<n;j++)
	    {
	        flag=1;
	        if(arr[j]%i!=0)
	        {
	            flag=1;
	            break;
	        }
	        else
	        flag=0;
	    }
	    if(flag==0)
	    break;
	}
	gcd=i;
	printf("%d",gcd);
	return 0;
}
