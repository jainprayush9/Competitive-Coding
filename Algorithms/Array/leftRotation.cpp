// Rotate the array in left direction by D.

#include<iostream>
 using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N,D;
    cin>>N>>D;
    int arr[N],i;
    //Left rotation
    for(i=0;i<N;i++)
    {
        cin>>arr[(i+N-D)%N];
    }
    for(i=0;i<N;i++)
    {
        cout<<arr[i]<<" ";
    }
}
