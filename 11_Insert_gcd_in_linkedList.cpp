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
    int gcd(int a, int b) {
        if (b == 0) {
            return abs(a);
        }
        return gcd(b, a % b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;

        while(curr->next){
            ListNode* firstNode = curr;
            ListNode* secondNode = curr->next;
            int newNodeVal = gcd(firstNode->val,secondNode->val);
            ListNode* gcdNode = new ListNode(newNodeVal);
            firstNode->next = gcdNode;
            gcdNode->next = secondNode;
            curr = secondNode;
        }
        return head;
    }
};