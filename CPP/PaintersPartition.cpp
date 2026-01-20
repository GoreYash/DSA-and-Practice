#include <iostream>
#include <vector>
using namespace std;
bool isPossible(vector<int> arr, int n , int m , int mid){
    int painter = 1, time = 0;
    for(int i = 0; i < n; i++){
        if ((time+arr[i]) <= mid){
            time+=arr[i];
        }
        else{
            painter++;
            time = arr[i];
        }
    }
    return (painter<=m)? true:false;
}

int main() {
    vector<int> arr = {40,30,10,20};
    int m = 2, n = 4;
    int ans, maxTime=-1  ,sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += arr[i];
        maxTime = max(maxTime, arr[i]);
    }
    
    int s = maxTime, e = sum, mid;
    ans = -1;
    while (s<=e)    
    {
        mid = s+(e-s)/2;
        if(isPossible(arr, n,m, mid)){
            e = mid-1;
            ans = mid;
        }
        else{
            s = mid + 1;
        }
    }
    

    cout << ans;
    return 0;
}
