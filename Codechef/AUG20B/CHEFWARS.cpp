//Link to the problem: https://www.codechef.com/AUG20B/problems/CHEFWARS

#include<iostream>
 using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int T;
    cin>>T;
    while(T--)
    {
        long int H,P;
        cin>>H>>P;
        if((H/2)>P)
            cout<<0<<"\n";
        else
            cout<<1<<"\n";
    }
    
}

