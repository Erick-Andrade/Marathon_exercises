//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    bool is_palindrome(string a) {
        int size = a.size();
        int middle = size / 2;
        for (int i = 0; i < middle; i++) if (a[i] != a[size-i-1]) return false;
        return true;
    }
    int PalinArray(int a[], int n)
    {
        for (int i = 0; i < n; i++) {
            if (!is_palindrome(to_string(a[i]))) return 0;
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends