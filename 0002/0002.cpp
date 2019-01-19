/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=NULL;
        int length1=0;
        int length2=0;
        ListNode* p=l1;
        ListNode* q=l2;
        while(p!=NULL) {
            length1++;
            p=p->next;
        }
        while(q!=NULL) {
            length2++;
            q=q->next;
        }    
        int maxlen=0;
        int minlen=0;
        if(length2>length1) {
            maxlen=length2;
            minlen=length1;
        }
        else if(length2<length1) {
            maxlen=length1;
            minlen=length2;
        }
        else {
            maxlen=minlen=length1;
        }
        ListNode* temp=head;
        for(int i=0;i<minlen;i++) {
            ListNode* p=new ListNode(l1->val+l2->val);
            if (NULL == head) {
                head = p;
            }
            else {
                temp->next = p;
            }
            temp = p;
            //result->val=l1->val+l2->val;
            l1=l1->next;
            l2=l2->next;
            //result=result->next;
        }
        if(length1>=length2) {
            for(int i=0;i<(length1-length2);i++) {
                ListNode* p=new ListNode(l1->val);
                if (NULL == head) {
                    head = p;
                }
                else {
                    temp->next = p;
                }
                temp = p;
                //result->val=l1->val;
                l1=l1->next;
                //result=result->next;
            }
        }
        else {
            for(int i=0;i<(length2-length1);i++) {
                ListNode* p=new ListNode(l2->val);
                if (NULL == head) {
                    head = p;
                }
                else {
                    temp->next = p;
                }
                temp = p;
                //result->val=l2->val;
                l2=l2->next;
                //result=result->next;
            }
        }
        for(ListNode* p=head;p!=NULL;p=p->next) {
            if(p->val>=10) {
                p->val=p->val-10;
                if(p->next!=NULL)
                    p->next->val++;
                else {
                    ListNode* s=new ListNode(1);
                    p->next=s;
                }
            }    
        }
        return head; 
    }
};
