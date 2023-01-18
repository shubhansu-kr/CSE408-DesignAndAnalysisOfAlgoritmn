// Double Linked List

#include <bits/stdc++.h>
using namespace std ;

struct DoubleListNode {
    int val;
    DoubleListNode * next, *prev;
    DoubleListNode():val(0), next(nullptr), prev(nullptr){}
    DoubleListNode(int val):val(val), next(nullptr), prev(nullptr){}
    DoubleListNode(int val, DoubleListNode *next, DoubleListNode *prev):val(val), next(next), prev(prev){}
};

DoubleListNode *createList () {
    int n, x;
    cout << "Enter the size : ";
    cin >> n;
    DoubleListNode * head = nullptr, *prev = nullptr;
    while (n--) {
        cout << "Data : ";
        cin >> x ;
        DoubleListNode *p = new DoubleListNode(x);
        if (head != nullptr) {prev->next = p, p->prev = prev, prev = p;}
        else {head = p,prev = head;}
    }
    return head;
}

void traverse(DoubleListNode *head) {
    DoubleListNode *p = head;
    while(p) {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
}

int main () {
    DoubleListNode *head = createList();
    traverse(head);
    return 0;
}