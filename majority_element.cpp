/** Boyers moore algorithm **/
// time - O(n), space - O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int counter = 0;
        int majority;
        for(int i=0; i<nums.size(); i++){
            if(counter == 0){
                majority = nums[i];
                counter++;
            } else {
                if(majority == nums[i]){
                    counter++;
                } else {
                    counter--;
                }
            }
        }
        return majority;
    }
};