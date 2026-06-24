class Solution {
public:
    int binarySearch(int start, int end,vector<int>& numbers, int target){
        //int end = numbers.size()-1;
         int mid = start + (end - start) / 2;

        if(start>end)return -1;
        if(numbers[mid]==target)return mid;
        if( numbers[mid]>target)return binarySearch(start, mid-1, numbers, target);
        else return binarySearch(mid+1, end, numbers, target);
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector<int>ans;
        for(int i=0; i<n; i++){
            int fn = numbers[i];
            // binary search 
            int sn = target - fn;
            int res = binarySearch(i+1,n-1,numbers,sn);
            if(res!= -1){
                ans.push_back(i+1);
                ans.push_back(res+1);
                break;
            }
        }
        return ans;
    }
};
