/*Solved my first ever leetcode medium! ( with zero assistance too)

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {

        int sum = 0;
        ListNode* dummy, * solved, * helper;

        dummy = solved = helper = new ListNode();


        while ((head->next) != nullptr) {

            cout << head->val;

            dummy = head->next;
            if (dummy->val != 0) {
                sum += (dummy->val);
            }
            else {
                helper->next = new ListNode(sum);
                helper = helper->next;
                sum = 0;
            }


            head = head->next;

        }

        return solved->next;
    }
}; 

*/