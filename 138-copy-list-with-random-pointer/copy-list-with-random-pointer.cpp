/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        Node* headcopy = new Node(0);
        Node* temp = head;
        Node* tempcopy = headcopy;
        while (temp) {
            tempcopy->next = new Node(temp->val);
            temp = temp->next;
            tempcopy = tempcopy->next;
        }
        temp = head;
        tempcopy = headcopy;
        headcopy = headcopy->next;
        delete (tempcopy);
        tempcopy = headcopy;
       

        unordered_map<Node*, Node*> mp;
        while (temp) {
            mp[temp] = tempcopy;
            temp = temp->next;
            tempcopy = tempcopy->next;
        }
        temp = head;
        tempcopy = headcopy;
        while (temp) {
            tempcopy->random = mp[temp->random];
            temp = temp->next;
            tempcopy = tempcopy->next;
        }
        return headcopy;
    }
};