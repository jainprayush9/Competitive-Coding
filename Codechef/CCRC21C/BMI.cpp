#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
	    int M,H,res;
	    cin>>M>>H;
	    res = M / (H*H);
	    if(res<=18)
	        cout<<"1"<<endl;
	    else if(res>=19 && res<=24)
	        cout<<"2"<<endl;
	    else if(res>=25 && res<=29)
	        cout<<"3"<<endl;
	    else if(res>=30)
	        cout<<"4"<<endl;
	}
	return 0;
}
