/* Link to the problem: https://www.codechef.com/JUNE20B/problems/PRICECON */

#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int N,K,loss=0;
	    scanf("%d %d",&N,&K);
	    int arr[N],i;
	    for(i=0;i<N;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    for(i=0;i<N;i++)
	    {
	        if(arr[i]>K)
	        {
	            loss=loss+arr[i]-K;
	        }
	    }
	    printf("%d\n",loss);
	}
	return 0;
}

