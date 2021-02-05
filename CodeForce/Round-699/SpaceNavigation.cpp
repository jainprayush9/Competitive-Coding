#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
        int x,y;
        cin>>x>>y;
        string ins;
        cin>>ins;
        int p,q,r,s;
        p=count(ins.begin(),ins.end(),'U');
        q=count(ins.begin(),ins.end(),'D');
        r=count(ins.begin(),ins.end(),'R');
        s=count(ins.begin(),ins.end(),'L');
        if(x>=0 && y>=0)
        {
            if(r>=x && p>=y)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(x<0 && y<0)
        {
            if(s>=abs(x) && q>=abs(y))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(x>=0 && y<0)
        {
            if(r>=x && q>=abs(y))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(x<0 && y>=0)
        {
            if(s>=abs(x) && p>=y)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
