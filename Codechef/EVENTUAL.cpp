// Link to the problem: https://www.codechef.com/COOK120B/problems/EVENTUAL

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
	    char str[N];
	    cin>>str;
	    int i = 0, alphabet[26] = {0}, j;
	    while (str[i] != '\0') {
         if (str[i] >= 'a' && str[i] <= 'z') {
         j = str[i] - 'a';
         ++alphabet[j];
         }
      ++i;
     }
     int flag=0;
     for (i = 0; i < 26; i++)
     {
         if(alphabet[i]%2!=0)
         {
             flag=1;
             break;
         }
     }
     if(flag==1)
     {
         cout<<"NO"<<endl;
     }
     else
     {
         cout<<"YES"<<endl;
     }
	}
	return 0;
}
