class Solution {
public:
    int eating(vector<int>& piles, int speed){
        int count =0;
        for(auto pile: piles){
            count += (pile + speed - 1) / speed; 
        }
        return count;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        //vector<int>num(h);
        //(num.begin(), num.end(), 1);
        int l =1, high =*max_element(piles.begin(), piles.end());
        int res = high;
        while(l<=high){
            int mid = l + (high-l)/2;
            if(eating(piles, mid)<=h){ res = mid; 
            high = mid-1; }
            else l = mid+1;
        }
        return l;
    }
};
