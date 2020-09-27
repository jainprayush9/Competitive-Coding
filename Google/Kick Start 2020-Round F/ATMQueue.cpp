#include <iostream>
using namespace std;

int main() {
	int T,k;
	cin>>T;
	for(k=1;k<=T;k++)
	{
	    long long N,X;
	    cin>>N>>X;
	    long long arr[N],i,count=0;
	    for(i=0;i<N;i++)
	    {
	        cin>>arr[i];
	    }
	    cout<<"Case #"<<k<<": ";
	    while(count!=N)
	    {
	        for(i=0;i<N;i++)
	        {
	            if(arr[i]==0)
	            {
	                continue;
	            }
	            else if(arr[i]==X)
	            {
	                arr[i]=arr[i]-X;
	                cout<<i+1<<" ";
	                count++;
	            }
	            else if(arr[i]<X)
	            {
	                arr[i]=arr[i]-arr[i];
	                cout<<i+1<<" ";
	                count++;
	            }
	            else if(arr[i]>X)
	            {
	                arr[i]=arr[i]-X;
	            }
	        }
	    }
	    cout<<endl;
	    
	}
	return 0;
}
