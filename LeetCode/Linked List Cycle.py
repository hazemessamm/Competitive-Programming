# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: ListNode) -> bool:
        s = set()
        temp = head
        flag = False
        while temp:
            if temp in s:
                flag = True
                break
            s.add(temp)
            temp = temp.next
        if flag:
            return True
        else:
            return False
