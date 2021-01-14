#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
	    int N,d;
	    cin>>N>>d;
	    int arr[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+N);
	    int flag=0;
	    for(int i=0;i<N;i++)
	    {
	        if(arr[i]<=d)
	            continue;
	        else
	        {
	            arr[i]=arr[0]+arr[1];
	            if(arr[i]>d){
	                flag=1;
	                break;
	            }
	        }
	    }
	    if(flag==1)
	        cout<<"NO"<<endl;
	    else
	        cout<<"YES"<<endl;
	}
	return 0;
}
