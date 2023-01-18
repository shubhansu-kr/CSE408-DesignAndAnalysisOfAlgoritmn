// Linked list implementation.

#include <bits/stdc++.h>
using namespace std ;

struct ListNode {
    int val;
    ListNode * next;
    ListNode():val(0), next(nullptr){}
    ListNode(int val):val(val), next(nullptr){}
    ListNode(int val, ListNode *next):val(val), next(next){}
};

ListNode *createList () {
    int n, x;
    cout << "Enter the size of list: ";
    cin >> n;
    ListNode * head = nullptr, *prev = nullptr;
    while (n--) {
        cout << "Data: ";
        cin >> x ;
        ListNode *p = new ListNode(x);
        if (head != nullptr) {prev->next = p,prev = p;}
        else {head = p,prev = head;}
    }
    return head;
}

void traverse(ListNode *head) {
    ListNode *p = head;
    while(p) {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
}

int main () {
    ListNode *head = createList();
    traverse(head);
    
    return 0;
}