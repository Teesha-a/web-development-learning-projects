//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function Template for C++

void utility(string s){
    // length of string is given by s.length()
    // character at any index i is given by s[i]
    
    //Write your code here
    int n=s.length();
    for(int i=0;i<=n;i+2){
        cout<<s[i];
    }
}


//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    string s; cin>>s; 
        utility(s);
        cout<<endl;
	
cout << "~" << "\n";
}
}
// } Driver Code Ends