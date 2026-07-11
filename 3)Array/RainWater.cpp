#include <bits/stdc++.h> //always use this because it covers all func. of cpp
using namespace std;

void trap(int *heights, int n){
    int leftMax[20000];
    leftMax[0] = INT_MIN;
    int rightMax[20000];
    rightMax[n-1] = INT_MIN;
    for(int i=1; i<n; i++) {
        leftMax[i] = max(leftMax[i-1], heights[i-1]);
        cout << leftMax[i] << ",";
    }
    cout << endl;
    for(int i= n-2; i>=0;i--){
        rightMax[i] = max(rightMax[i+1], heights[i+1]);
        cout << rightMax[i] << ",";
    }
    int waterTrapped = 0;
    for(int i=0; i<n; i++) {
        int currWater = min(leftMax[i], rightMax[i]) - heights[i];
        if(currWater > 0) {
            waterTrapped += currWater;
        }
    }
    cout << "Total water trapped = " << waterTrapped << endl;
}

int main() {
       int heights[7] = {4, 2, 0, 6, 3, 2, 5};
       int n = sizeof(heights) / sizeof(int);
       
      trap(heights, n);
         return 0;
}