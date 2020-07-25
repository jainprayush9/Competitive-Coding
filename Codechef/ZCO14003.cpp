//Link to the problem: https://www.codechef.com/LRNDSA01/problems/ZCO14003

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	long long N;
	cin>>N;
	long long max, arr[N],i;
	for(i=0;i<N;i++)
	{
	    cin>>arr[i];
	}
	sort(arr,arr+N);
	max=arr[N-1];
	for(i=N-2;i>=0;i--)
	{
	    if(max < (arr[i]*(N-i)))
	    {
	        max=arr[i]*(N-i);
	    }
	}
	cout<<max;
	return 0;
}
