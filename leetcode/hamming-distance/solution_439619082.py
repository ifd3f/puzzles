def hammingWeight(n: int) -> int:
    count = 0
    while n != 0:
        if n & 1:
            count += 1
        n >>= 1
    return count

class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        return hammingWeight(x ^ y)