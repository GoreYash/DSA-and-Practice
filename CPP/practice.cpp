#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> set = {-5,5,6,9,10,15};
    int target = 4;
    int i=0,j=set.size()-1;
    while(i<j){
        if(target==set[i]+set[j]){
            cout<< set[i] << " and " << set[j];
            break;
        }
        target<set[i]+set[j]? j--: i++;
    }
    return 0;
}
