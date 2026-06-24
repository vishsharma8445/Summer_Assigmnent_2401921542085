class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* head = NULL;
        ListNode* tail = NULL;

        while (list1 != NULL && list2 != NULL) {

            int val;
            if (list1->val < list2->val) {
                val = list1->val;
                list1 = list1->next;
            } else {
                val = list2->val;
                list2 = list2->next;
            }

            if (head == NULL) {
                head = new ListNode(val);
                tail = head;
            } else {
                tail->next = new ListNode(val);
                tail = tail->next;
            }
        }

    
        while (list1 != NULL) {
            if (head == NULL) { head = new ListNode(list1->val); tail = head; }
            else { tail->next = new ListNode(list1->val); tail = tail->next; }
            list1 = list1->next;
        }

        while (list2 != NULL) {
            if (head == NULL) { head = new ListNode(list2->val); tail = head; }
            else { tail->next = new ListNode(list2->val); tail = tail->next; }
            list2 = list2->next;
        }

        return head;
    }
};
