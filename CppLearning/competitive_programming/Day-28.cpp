/****
    Code Challenge
Day - 28
N meetings in a room.
 * references - https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1#
****/

///--- Activity selection part-2 ---///
/*
#include <bits/stdc++.h>
using namespace std;

class Solution{

public:
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int, int>> array;
        for (int i = 0; i < n; i++)
        {
            array.push_back({end[i], start[i]});
        }
        
        sort(array.begin(), array.end());
        int k = array[0].first, count = 1;
        
        for (int i = 1; i < n; i++)
        {
            if (array[i].second > k)
            {
                count++;
                k = array[i].first;
            }
        }
        
        return count;
    }

  
};

int main(){
    int t;
    while(t--)
    {
        int n;
        cin>>n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
        {
            cin>>start[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            cin>>end[i];
        }
        
        Solution s;
        int result = s.maxMeetings(start, end, n);
        cout<<result;
    }
    
    return 0;
}*/