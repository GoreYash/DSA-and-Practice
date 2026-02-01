#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> arr, int n , int m , int mid){
    int lastPosition = arr[0], cows=1;
    for(int i = 0; i<n;i++){
        if(arr[i]-lastPosition >= mid){
            lastPosition = arr[i];
            cows++;
        }
        if(cows == m){
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> arr = {1,2,4,8,9};
    int m = 3, n = 5;
    int ans, minValue=INT_MAX,maxValue=INT_MIN;
    for (int i = 0; i < n; i++) 
    {
        minValue = min(minValue,arr[i]);
        maxValue = max(maxValue,arr[i]);
    }

    int s = 1, e = maxValue-minValue, mid;

    ans = -1;
    while (s<=e)    
    {
        mid = s+(e-s)/2;
        if(isPossible(arr, n,m, mid)){
            s = mid + 1;
            ans = mid;
        }
        else{
            e = mid-1;
        }
    }
    

    cout << ans;
    return 0;
}
