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
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
sort(t.begin(),t.end());
if(s==t)return true;
else return false;


    }
};
int main(){
}