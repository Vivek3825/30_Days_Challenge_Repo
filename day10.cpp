#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> Anagrams(vector<string> &str){

    unordered_map<string,vector<string>> mp;
    vector<vector<string>> ans;

    for(auto i : str){
        string original = i;
        sort(i.begin(),i.end());
        mp[i].push_back(original);
    }
    for(auto x : mp){
        vector<string> temp = x.second;
        ans.push_back(temp);
    }
    return ans;
}
   
int main()
{
   vector<string> str = {"tan","tea","eat","nat","bat","ate"};

   vector<vector<string>> ans = Anagrams(str);

   for(auto yes : ans){
    for(auto val : yes){
        cout<<val<<" ";
    }
    cout<<endl;
   }
   
   return 0;
}
