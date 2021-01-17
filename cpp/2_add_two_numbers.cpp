#include <bits/stdc++.h>
using namespace std;
 // Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    // Iter next attribute if next is not None
    // // Initialize an empty container to hold summation value.
    // Previous.next point to current ListNode
    ListNode *head = new ListNode(0);
    ListNode *cur=head;
    int carry = 0;
    while(l1 || l2 || carry){
        if(l1){
            carry += l1 -> val;
            l1 = l1 -> next;
        }
        if(l2){
            carry += l2 -> val;
            l2 = l2 -> next;
        }
        int vals = carry % 10;
        carry = carry / 10;
        cout << vals << '\n';
        cur -> next = new ListNode(vals);
        cur = cur -> next;
    }

    return head -> next;
}

int main(){
    ListNode *a1 = new ListNode(5);
    ListNode *b1 = new ListNode(7);
    ListNode *ans = addTwoNumbers(a1,b1);
    return 0;
}
