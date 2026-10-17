class Solution:
    def maximumWealth(self, accounts: list[list[int]]) -> int:
        ans=float('-inf')
        for i in range(len(accounts)):
            l=0
            for j in range(len(accounts[0])):
                l+=accounts[i][j]
            ans=max(l,ans)
        return ans



        