/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *p, *head;
    int a, b, s, carry = 0;

    p = (struct ListNode*)malloc(sizeof(struct ListNode));
    if (p == NULL) 
        return NULL;
    head = p;
    
    for (;;) {
        if (l1) {
            a = l1->val;
            l1 = l1->next;
        }
        else {
            a = 0;
        }
        
        if (l2) {
            b = l2->val;
            l2 = l2->next;
        }
        else {
            b = 0;
        }
        
        s = a + b + carry;

        carry = s/10;
        p->val = s%10;
        if (!l1 && !l2 && !carry) {
            p->next = NULL;
            break;
        }
        p->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        if (p->next == NULL) 
            break;
        
        p = p->next;
    }
    
    return head;
}