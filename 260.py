#260. Single Number III
#Given an array of numbers nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.

#Every time put a number into the set if its first appearence, otherwise remove it from the set. At last, return the list.

class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        set1 = set()
        for i in nums:
            if i in set1:
                set1.remove(i)
            else:
                set1.add(i)
        return list(set1)
