'''
Link of the question : https://leetcode.com/problems/design-hashmap/
Leetcode question number : 706
'''


class MyHashMap:

    def __init__(self):
        MAX = 10**6+5
        self.lookup = [None]*MAX

    def put(self, key: int, value: int) -> None:
        self.lookup[key] = value

    def get(self, key: int) -> int:
        if self.lookup[key] is None:
            return -1
        return self.lookup[key]

    def remove(self, key: int) -> None:
        self.lookup[key] = None
