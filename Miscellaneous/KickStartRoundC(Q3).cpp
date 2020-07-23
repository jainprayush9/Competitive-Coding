// Link to the problem: https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff43/00000000003381cb

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    int tc=0;
    while(T--){
        tc++;
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        long long int sum=0,perfect,count=0;
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=i; j<n; j++)
            {
               sum=sum+arr[j];
               if (floor(sqrt(sum)) == ceil(sqrt(sum)))
               {
                count++;
                 }
             }
        }

        cout<<"Case #"<<tc<<": "<<count;
        cout<<endl;
    }
        return 0;

}
