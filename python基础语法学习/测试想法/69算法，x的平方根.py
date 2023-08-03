# class Solution:
#     def mysqrt(self, x: int) -> int:
#         l, r, ans = 0, x, None
#         while l < r:
#             mid = (l + r) // 2
#             if mid <= r / mid:
#                 l = mid - 1
#             else:
#                 l = mid + 1
#         ans = l
#         return ans

class Solution:
    def mySqrt(self, x):
        if x == 0:
            return 0
        if x == 1:
            return 1
        l, r, ans = 0, x, -1
        while l < r:
            mid = (l + r) // 2
            if mid <= r / mid:
                l = mid - 1
            else:
                l = mid + 1
        ans = l
        return ans


if __name__ == '__main__':
    ans1 = Solution.mySqrt(self=Solution, x=8)
    print(ans1)