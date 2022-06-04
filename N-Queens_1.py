'''
Link of the question : https://leetcode.com/problems/n-queens/
Leetcode question number : 51
'''


class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        ans = []

        def tryRow(row, board, columns_used, diag1_used, diag2_used):
            if row == n:
                current = []
                for r in board:
                    current.append("".join(r))
                ans.append(current)
                return
            for col in range(n):
                if col not in columns_used and row-col not in diag1_used and row+col not in diag2_used:
                    board[row][col] = "Q"
                    columns_used.add(col)
                    diag1_used.add(row-col)
                    diag2_used.add(row+col)
                    tryRow(row+1, board, columns_used, diag1_used, diag2_used)
                    diag2_used.remove(row+col)
                    diag1_used.remove(row-col)
                    columns_used.remove(col)
                    board[row][col] = "."
        board = [["."]*n for _ in range(n)]
        tryRow(0, board, set(), set(), set())
        return ans
