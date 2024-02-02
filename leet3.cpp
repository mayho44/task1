#include <cmath>
#include <numeric>
#include<bits/stdc++.h>
#include <string>
using namespace std;
#define endl '\n'
#define ll long long
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       vector<int>returned,freq(1000000);
       priority_queue<int>pq;
       for(int i=0;i<nums.size();i++){
        freq[nums[i]]++;
       }
       for(int i=0;i<freq.size();i++){
        pq.push(freq[i]);
       }
       while(k--){
        returned.push_back(freq[pq.top()]);
        pq.pop();
       }
       return returned;
    }
};