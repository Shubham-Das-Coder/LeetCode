'''
Link of the question : https://leetcode.com/problems/intersection-of-two-linked-lists/
Leetcode question number : 160
'''


class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        def getLength(node):
            count = 0
            while node is not None:
                count += 1
                node = node.next
            return count
        lenA = getLength(headA)
        lenB = getLength(headB)
        if lenA < lenB:
            lenA, lenB = lenB, lenA
            headA, headB = headB, headA
        delta = lenA-lenB
        currentA = headA
        for _ in range(delta):
            currentA = currentA.next
        currentB = headB
        while currentA != currentB:
            currentA = currentA.next
            currentB = currentB.next
        return currentA
