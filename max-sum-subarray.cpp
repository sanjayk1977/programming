#include <iostream>
#include <vector>

using namespace std;


int maxSubArray(vector<int>& nums) {
    
    int   currMax = 0, totMax = INT_MIN;

    for (int &n:nums) {
        currMax = max (n, currMax + n);
        totMax = max(totMax, currMax);
    }
    return totMax;
}


int main () {

    vector<int>   input = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(input);
    return 0;
}