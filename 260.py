class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        set1 = set()
        for i in nums:
            if i in set1:
                set1.remove(i)
            else:
                set1.add(i)
        return list(set1)
