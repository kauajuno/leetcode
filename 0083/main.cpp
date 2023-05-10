#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* aux = head;

        while(aux && aux->next){
            if(aux->val == aux->next->val){
                aux->next = aux->next->next;
                continue;
            }
            aux = aux->next;
        }
        
        return head;
    }
};

int main(){


    return 0;
}