//Link to the problem: https://www.codechef.com/JULY20B/problems/CHEFSTR1

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    long arr[N],i;
	    for(i=0;i<N;i++)
	    {
	        cin>>arr[i];
	    }
	    long sum=0;
	    for(i=0;i<N-1;i++)
	    {
	        long x=arr[i+1]-arr[i];
	        sum=sum+abs(x);
	        sum=sum-1;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
