class Solution:
    # @return an integer
    def reverse(self, x):
        if x < 0:
            return int(str(x)[1:][::-1])*-1
        else:
            return int(str(x)[::-1])


call = Solution()
t = int(input())
for i in range(t):
    print(call.reverse(int(input())))

