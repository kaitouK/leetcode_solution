class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0;i<numbers.size();++i){
            int left=i+1,right=numbers.size()-1,complement=target-numbers[i];
        while(left<=right){
            int mid=left+(right-left)/2;
            if(numbers[mid]==complement)
            return{i+1,mid+1};
            else if(numbers[mid]>complement)
            right=mid-1;
            else left=mid+1;
        }
        }
        return {-1,-1};
    }
};