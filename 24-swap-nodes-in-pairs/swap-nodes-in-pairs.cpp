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
    ListNode* swapPairs(ListNode* head) {
        vector<int>arr;
        ListNode*temp=head;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int n=arr.size();
        temp=head;
        for(int i=0;i<n-1;i+=2){
            temp->val=arr[i+1];
            temp=temp->next;
            temp->val=arr[i];
            temp=temp->next;
        }
        return head;
    }
};