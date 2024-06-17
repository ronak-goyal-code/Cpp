class Solution {
public:
    ListNode* insert(ListNode* head,int val){
        ListNode* temp = new ListNode(val);
        if(head == NULL){
            head = temp;
        }
        else if(head->next==NULL){
            head->next = temp;
        }
        else{
            ListNode* tem = head;
            while(tem->next!=NULL){
                tem = tem->next;
            }
            tem->next = temp;
        }
        return head;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode();
        int carry = 0;
        while(l1!=NULL && l2!=NULL){
            int x = l1->val + l2->val + carry;
            if(x<10){
                insert(head,x);
            }
            else{
                insert(head,x%10);
            }
            carry = x/10;
            l1 = l1->next;
            l2 = l2->next;
        }
        if(l1!=NULL){
            if(carry==0){
                while(l1!=NULL){
                insert(head,l1->val);
                l1 = l1->next;
                }
            }
            else{
                while(l1!=NULL){
                int z = l1->val + carry;
                if(z<10){
                    insert(head,z);
                }
                else{
                    insert(head,z%10);
                }
                carry = z/10;
                l1 = l1->next;
                }
            }
        }
        if(l2!=NULL){
            if(carry==0){
                while(l2!=NULL){
                insert(head,l2->val);
                l2 = l2->next;
                }
            }
            else{
                while(l2!=NULL){
                int z = l2->val + carry;
                if(z<10){
                insert(head,z);
                }
                else{
                    insert(head,z%10);
                }
                carry = z/10;
                l2 = l2->next;
                }
            }
        }
        if(carry!=0){
            insert(head,carry);
        }
        head = head->next;
        return head;
    }
};