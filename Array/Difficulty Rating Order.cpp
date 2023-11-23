#include <iostream>
using namespace std;

int main() 
{
	int t; 
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    bool flag = true;
	    for(int i=1;i<n;i++)
	    {
	       if(arr[i-1]<=arr[i]){
	           continue;
	       }
	       else
	       {
	           flag = false;
	           break;
	       }
	    }
	    if(flag)cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	    
	}
	// your code goes here
	return 0;
}
