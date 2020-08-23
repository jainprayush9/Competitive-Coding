/*Problem
An arithmetic array is an array that contains at least two integers and the differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3], and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are not arithmetic arrays.

Sarasvati has an array of N non-negative integers. The i-th integer of the array is Ai. She wants to choose a contiguous arithmetic subarray from her array that has the maximum length. Please help her to determine the length of the longest contiguous arithmetic subarray.

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the integer N. The second line contains N integers. The i-th integer is Ai.

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the length of the longest contiguous arithmetic subarray. */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	for(int p=0;p<T;p++)
	{
	    long long N,i,j;
	    cin>>N;
	    long long arr[N];
	    for(i=0;i<N;i++)
	    {
	        cin>>arr[i];
	    }
	    long long best = 0;
        for (long long a = 0; a < N; a++) 
        {
            long long x = arr[a]-arr[a+1],sum=0;
            for (long long b = a; b < N; b++)
            {
                if((arr[b]-arr[b+1])==x)
                    sum++;
                else
                    break;
                best = max(best,sum);
            }
        }
        
	    cout<<"Case #"<<p+1<<": "<<best+1<<"\n";
	}
	return 0;
}


