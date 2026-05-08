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

    ListNode* solveMerge(ListNode* l1 , ListNode* l2){
        if(!l1)return l2 ;
        if(!l2)return l1 ;

        if(l1->val <= l2->val){
            l1->next = solveMerge(l1->next , l2);
            return l1 ;
        }
        else{
            l2->next = solveMerge(l2->next , l1);
            return l2 ;
        }

    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode * result = NULL;

        for(int i = 0 ; i < lists.size(); i++){
            result = solveMerge(result , lists[i]);
        }
        return result ;
    }
};
