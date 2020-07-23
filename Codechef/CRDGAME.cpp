// Link to the problem: https://www.codechef.com/JULY20B/problems/CRDGAME

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
	    int i;
	    int A[N],B[N];
	    int wA=0,wB=0;
	    for(i=0;i<N;i++)
	    {
	        cin>>A[i]>>B[i];
	    }
	    for(i=0;i<N;i++)
	    {
	        long sA=0,sB=0;
	        while(A[i]!=0)
	        {
	            sA=sA+A[i]%10;
	            A[i]=A[i]/10;
	        }
	        while(B[i]!=0)
	        {
	            sB=sB+B[i]%10;
	            B[i]=B[i]/10;
	        }
	        if(sA>sB)
	        {
	            wA++;
	        }
	        else if(sA<sB)
	        {
	            wB++;
	        }
	        else
	        {
	            wA++;
	            wB++;
	        }
	    }
	    if(wA>wB)
	    {
	        cout<<0<<" "<<wA<<endl;
	    }
	    else if(wA<wB)
	    {
	        cout<<1<<" "<<wB<<endl;
	    }
	    else
	    {
	        cout<<2<<" "<<wA<<endl;
	    }
	}
	return 0;
}
