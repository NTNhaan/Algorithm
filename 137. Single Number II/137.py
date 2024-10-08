def singleNumber(nums):
        result=0
        for i in nums:
            if nums.count(i) == 1:
                result = i
        return result

# Example usage:
nums = list(map(int, input().split()))
print(singleNumber(nums))