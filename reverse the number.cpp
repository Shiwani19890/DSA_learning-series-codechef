#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int rev=0,r;
	    while(n!=0)
	    {
	        r=n%10;
	        rev=rev*10+r;
	        n=n/10;
	    }
	    cout<<rev<<endl;
	}// your code goes here
	return 0;
}
