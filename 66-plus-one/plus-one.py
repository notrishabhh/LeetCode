class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        n = 0
        for i in digits:
            n = (n*10) + i
        n = n+1

        digits =[]
        while n > 0:
            digits.insert(0, n%10)
            n //= 10
        return digits 