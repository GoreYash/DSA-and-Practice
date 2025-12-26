#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> arr, int num){
    int start=0,mid,end=arr.size()-1;
    while (start<=end)
    {
        mid = start+(end-start)/2;
        if(arr[mid]==num)   return mid;
        if(arr[mid]<=arr[end]){
            if(arr[end]>=num && num > arr[mid]){
                start = mid+1;
            }
            else{
                end = mid - 1;
            }
        }
        else{
            if(arr[start]<=num && num < arr[mid]){
                end = mid-1;
            }
            else{
                start = mid + 1;
            }
        }
    }
    return -1;
}
int main() {
    vector<int> arr = {1,5,6,-5,-2,-1,0};
    int num = 0;
    int result = search(arr, num);
    result==-1? cout<< "not found": cout << "found at index " << result;
    return 0;
}
