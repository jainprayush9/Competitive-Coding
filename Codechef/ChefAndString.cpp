//Link to the problem: https://www.codechef.com/JUNE20B/problems/XYSTR

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    string str;
	    cin>>str;
	    int i,count=0;
	    for(i=0;i<str.length();i++)
	    {
	        if((str[i]=='x' && str[i+1]=='y') || (str[i]=='y' && str[i+1]=='x'))
	        {
	            i=i+1;
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
