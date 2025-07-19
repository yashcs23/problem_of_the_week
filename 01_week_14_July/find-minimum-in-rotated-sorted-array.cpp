#include <vector>
#include <limits.h>
class Solution {
public:
    int findMin(vector<int>& arr) {
        int low = 0 ;
        int high = arr.size() - 1;
        int ans = INT_MAX;

        while(low<=high){
            int mid = low + (high - low)/2;

            if(arr[mid] >= arr[low]){
                if(ans>= arr[low]){
                    ans = arr[low];
                }
                low = mid + 1;
            }

            else{
                if(ans >= arr[mid]){
                    ans = arr[mid];
                }
                high = mid-1;

            }
        }
        return ans;
    }
};