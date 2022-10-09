class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       
        int c=0;
        ListNode * temp = head;
        while(temp){
            temp = temp->next;
            c++;
        }
         if(c==n)
            return head->next;
        int k  = c - n-1;
        temp = head;
        while(k--){
            temp = temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }

         
};

 

