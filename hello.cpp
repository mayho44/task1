#include <iostream>
#include <iomanip>
#include <cmath>
#include <numeric>
#include<bits/stdc++.h>
#include <string>
using namespace std;
#define endl '\n'
#define ll long long
int main(){
    string s;cin>>s;
    int counter=0,flag;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]==' '||s[i]=='"'){
            if(counter>0)break;
        }
        else{
            counter++;
        }
    }
      cout<<counter<<endl;
}