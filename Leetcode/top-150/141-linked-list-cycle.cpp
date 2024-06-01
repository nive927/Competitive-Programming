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
    bool hasCycle(ListNode *head) {

        ListNode *slow = head;
        ListNode *fast = head;

        // Check that the fast pointer has not reached the end of the list - NO CYCLE 
        while (fast != NULL && fast->next != NULL) {

            // Traverse if not the end of the list or cycle not found yet
            slow = slow -> next;
            fast = fast -> next -> next;

            // check if the fast pointer met the slow pointer - CYCLE FOUND - RETURN
            if (slow == fast) {
                return true;
            }
        }

        return false;
        
    }
};