# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: ListNode) -> ListNode:
        
        if head is None:
            return 
        slow_pointer = head
        fast_pointer = head.next
        
        while fast_pointer:
            fast_pointer.val, slow_pointer.val = slow_pointer.val, fast_pointer.val
            slow_pointer = slow_pointer.next.next
            if fast_pointer.next is None:
                fast_pointer = fast_pointer.next
            else:
                fast_pointer = fast_pointer.next.next
        
            
        return head
