#include <iostream>
#include <iomanip>
#include <cmath>
#include <numeric>
#include<bits/stdc++.h>
#include <string>
using namespace std;
#define endl '\n'
#define ll long long
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      string s2,s3;
      vector<vector<string>>v;
      map<string,vector<string>>mp;
      for(int i=0;i<strs.size();i++){
    s3=s2=strs[i];
    sort(s3.begin(),s3.end());
    mp[s3].push_back(s2);
}
     for(auto it:mp){
     v.push_back(it.second);
        }
    
    return v;
    }
};

int main(){
}
