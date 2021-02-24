#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
	    int N,K;
	    cin>>N>>K;
	    int arr[K];
	    for(int i=0;i<K;i++)
	        cin>>arr[i];
	     while(N--)
	     {
	         string str;
	         cin>>str;
	         int sum=0;
	         for(int i=0;i<K;i++)
	         {
	             if(str[i]=='1')
	                sum=sum+arr[i];
	         }
             cout<<sum<<endl;
	     }
	}
	return 0;
}
