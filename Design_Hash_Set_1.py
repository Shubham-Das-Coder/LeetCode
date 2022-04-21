'''
Link of the question : https://leetcode.com/problems/design-hashset/
Leetcode question number : 705
'''


class MyHashSet:

    def __init__(self):
        MAX = 10**6+2
        self.table = [False]*MAX

    def add(self, key: int) -> None:
        self.table[key] = True

    def remove(self, key: int) -> None:
        self.table[key] = False

    def contains(self, key: int) -> bool:
        return self.table[key]
