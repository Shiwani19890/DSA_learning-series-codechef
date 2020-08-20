#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int l=s.length();
	    if(l==1)
	    cout<<"YES"<<endl;
	    else
	    {
	    int arr[26]={0};
	    int arr2[26]={0};
	    int j,i;
	    int flag=1;
	    
	    for(i=0,j=l-1;i<j;i++,j--)
	    {
	        arr[s[i]-'a']++;
	        arr2[s[j]-'a']++;
	    }
	   
	        
	    
	    for( i=0;i<26;i++)
	    {
	        if(arr[i]!=arr2[i])
	        {
	            flag=0;
	            
	            break;
	        }
	        else
	        flag=1;
	    }
	    if(flag==1)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    }
	}
	return 0;
}
