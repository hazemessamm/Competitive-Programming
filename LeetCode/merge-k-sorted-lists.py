# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[ListNode]) -> ListNode:
        list_recorder = []
        for l in lists:
            while l:
                list_recorder.append(l.val)
                l = l.next
        
        temp_p = p = ListNode(0)
        for i, value in enumerate(sorted(list_recorder)):
            p.next = ListNode(value)
            p = p.next
        return temp_p.next
            
