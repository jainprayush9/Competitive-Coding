// Link to the problem: https://www.codechef.com/PROC2020/problems/FRAKK

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int P,Q;
	    cin>>P>>Q;
	    int i,ans=0,dec;
	    dec=P/Q;
	    for(i=0;i<N;i++)
	    {
	        P=P-(dec*Q);
	        if (P==0)
	        {
	            break;
	        }
	        P=P*10;
	        dec=P/Q;
	        ans=ans+dec;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
