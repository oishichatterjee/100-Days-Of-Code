# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        carry=0
        len_l1=0
        len_l2=0
        fake_l1=l1
        fake_l2=l2

        while(fake_l1):
            len_l1+=1
            fake_l1=fake_l1.next
        while(fake_l2):
            len_l2+=1
            fake_l2=fake_l2.next
        print(len_l1,len_l2)
        if len_l2>len_l1:
            temp=l2
            l2=l1
            l1=temp
        head=l1    
        while(l2):
            l1.val=l1.val+l2.val+carry
            if l1.val>9:
                l1.val=l1.val-10
                carry=1
            else:
                carry=0
            l1=l1.next
            l2=l2.next
            
        
        if carry==1:
            while(l1):
                # if l1.next==None and carry==1:
                #     a=ListNode(1,None)
                #     l1.next=a
                #     break

                l1.val=l1.val+carry
                if l1.val>9:
                    l1.val=l1.val-10
                    carry=1
                else:
                    carry=0
                
                if l1.next==None and carry==1:
                    a=ListNode(1,None)
                    l1.next=a
                    carry=0
                    break
                l1=l1.next
        
        newHead=head
        if carry==1:
            while(newHead):
                if newHead.next==None:
                    a=ListNode(1,None)
                    newHead.next=a
                    break
                newHead=newHead.next  
        return head
       

        