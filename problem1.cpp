#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    s += s;
    int n = s.size();

    map<int,int>mpp;
    int currSum = 0,maxSum = 0;
    int l = 0;

    for(int r=0;r<n;r++){
        mpp[s[r]]++;
        currSum += (s[r] - 'a' + 1);

        while(l <= r && mpp.size() < (r-l+1)){
            mpp[s[l]]--;
            currSum -= (s[l] - 'a' + 1);

            if(mpp[s[l]] == 0){
                mpp.erase(s[l]);
            }
            l++;
        }
        maxSum = max(maxSum,currSum);
    }
    cout<<maxSum<<endl;
}