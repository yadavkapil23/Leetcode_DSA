class Solution(object):
    def twoSum(self, nums, target):
        
        ans = {}
        for i in range(0,len(nums)):
            compliment = target - nums[i]
            if compliment in ans:
               return [ans[compliment],i]
            ans[nums[i]] = i
        

        return []