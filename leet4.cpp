#include <cmath>
#include <numeric>
#include<bits/stdc++.h>
#include <string>
using namespace std;
#define endl '\n'
#define ll long long
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp,mp2;
        vector<int>freq(100000);
      for(int i=0;i<nums.size();i++){
        freq[nums[i]]++;
        if(freq[nums[i]]>1)mp2[nums[i]]=i;
        else mp[nums[i]]=i;
        }
    sort(nums.begin(),nums.end());
    vector<int>res;
    long l=0,r=nums.size()-1;
    while(l<=r){
        if(nums[l]+nums[r]==target){
            if(nums[l]==nums[r]){
                res.push_back(mp[nums[l]]);
                res.push_back(mp2[nums[r]]);
                break;
            }
res.push_back(mp[nums[l]]);
res.push_back(mp[nums[r]]);
break;
        }
        else if(nums[l]+nums[r]>target)r--;
        else l++;
    }
    return res;
    }
};