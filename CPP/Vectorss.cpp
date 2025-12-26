#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> v, int value){
    int low=0,high=v.size()-1, mid;
    while (low<=high)
    {
        mid = (high+low)/2;

        if (v[mid]==value){
            return mid;
        } 
        else if(value<v.at(mid))
        {
            high = mid-1;
        }
        else if (value>v.at(mid))
        {
            low = mid+1;
        }
    }
    return -1;
}

void reverse(vector<int> &v){
    int fi = 0, li = v.size()-1, temp;
    while (fi<li)
    {
        temp = v[fi];
        v[fi] = v[li];
        v[li] = temp;
        li--;
        fi++;
    }
    
}
int main() {
    vector<int> v={3,5,7,22,66,353};
    int i = search(v,99);
    i != -1? cout<< "Found at index: " << i  << endl: cout<< "Not Found!" << endl;
    reverse(v);
    for(int val: v) cout<<val<<endl;
    return 0;
}