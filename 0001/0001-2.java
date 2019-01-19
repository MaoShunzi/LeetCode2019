class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map <Integer,Integer> hm=new HashMap<>();
        for(int i=0;i<nums.length;i++) {
            if(hm.containsKey(target-nums[i])&&hm.get(target-nums[i])!=i)
                return new int[] {i,hm.get(target-nums[i])};
            else
                hm.put(nums[i],i);
        }
        throw new IllegalArgumentException("No two sum solution");
    } 
}
