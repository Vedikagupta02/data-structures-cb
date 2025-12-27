#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int val) {
        this->val = val;
        this->next = nullptr;
    }
};
//Complete the function below
//donot modify main function
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {


    if(l1==NULL){
        return l2;
    }

    if(l2==NULL){
        return l1;
    }

    if(l1->val<l2->val){
        ListNode*newhead=l1;
        ListNode*x=mergeTwoLists(l1->next, l2);
        newhead->next=x;
        return newhead;
    }

    else{
        ListNode*newhead=l2;
        ListNode*x=mergeTwoLists(l1, l2->next);
        newhead->next=x;
        return newhead;
    }
    
}

ListNode* createList(int values[], int n) {
    if (n == 0) return nullptr;

    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;

    for (int i = 1; i < n; i++) {
        current->next = new ListNode(values[i]);
        current = current->next;
    }

    return head;
}

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    int values1[n];
    for (int i = 0; i < n; i++) {
        cin >> values1[i];
    }

    int m;
    cin >> m;

    int values2[m];
    for (int i = 0; i < m; i++) {
        cin >> values2[i];
    }

    ListNode* l1 = createList(values1, n);
    ListNode* l2 = createList(values2, m);

    ListNode* merged = mergeTwoLists(l1, l2);
    printList(merged);

   
    return 0;
}
