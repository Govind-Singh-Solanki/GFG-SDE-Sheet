//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    unordered_map<char, int> mp;
    string res = "";
    for(int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
        for(auto it : mp)
        {
            if(it.second > 1)
            {
                res = it.first;
                return res;
            }
        }
    }
    
    return to_string(-1);
}