# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        result1 = ''
        result2 = ''
        while l1:
            result1 += str(l1.val)
            l1 = l1.next
        while l2:
            result2 += str(l2.val)
            l2 = l2.next
            
        result1, result2 = result1[::-1], result2[::-1]
        
        final_res = str(int(result1) + int(result2))[::-1]
        node_list = [ListNode(val=i) for i in final_res]
        
        for i in range(len(node_list)-1):
            node_list[i].next = node_list[i+1]
        
        return node_list[0]
