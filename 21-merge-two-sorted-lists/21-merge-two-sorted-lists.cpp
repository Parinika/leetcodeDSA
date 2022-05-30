/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* merge(ListNode* h1, ListNode* h2){
        if(h1==NULL)
            return h2;
        if(h2==NULL)
            return h1;
        ListNode* result=NULL;
        if(h1->val <= h2->val){
            result=h1;
            result->next=merge(h1->next,h2);
        }
        else {
            result=h2;
            result->next=merge(h1,h2->next);
        }
        return result;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        return merge(list1,list2);
    }
};