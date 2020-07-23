// Link to the problem: https://www.codechef.com/problems/FCTRL

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    long long int N,count=0,x;
	    cin>>N;
	    while(N!=0)
	    {
	        x=N/5;
	        count=count+x;
	        N=N/5;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
