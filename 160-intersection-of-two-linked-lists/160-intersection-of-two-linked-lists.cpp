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
    int getCount(ListNode* head){
    ListNode* temp=head;
    int count=0;
    while(temp){
        count++;
        temp=temp->next;
    }
    return count;
}

ListNode *getNode(int d, ListNode* head1, ListNode* head2){
    if(head2==NULL)
        return NULL;
    ListNode* current1=head1;
    ListNode* current2=head2;
    for(int i=0;i<d;i++){
        current1=current1->next;
    }    
    while(current1 != NULL and current2 != NULL){
        if(current1==current2)
            return current1;
        current1=current1->next;
        current2=current2->next;
        }
        return NULL;
}
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        int c1=getCount(head1);
        int c2=getCount(head2);
        int d=abs(c1-c2);
        if(c1>c2)
            return getNode(d,head1,head2);
        else
            return getNode(d,head2,head1);
    }
};