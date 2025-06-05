// Last updated: 05/06/2025, 15:32:01
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
    ListNode* middleNode(ListNode* head) {
        ListNode* current = head;
        int count = 1;
        int division = 1;
        int prevMiddle = 1;
        ListNode* middleList = head;
        

        cout << "Head->Next: " << head->next << endl;
        cout << "_____" << endl;
        while (true) {
            cout << "Current->Val: " << current->val << endl;
            cout << "Current->Next: " << current->next << endl;
            division = count / 2;

            if (!(count & 1) || count == 1) {

                division++;
                cout << "Even or One: " << division << endl;
            }

            cout << "Count: " << count << endl;
            cout << "Division: " << division << endl;
            cout << "prevMiddle: " << prevMiddle << endl;
            cout << "Current Middle: " << middleList->val << endl;
            cout << "division > prevMiddle: " << (division > prevMiddle)
                 << endl;
            if (division > prevMiddle) {
                int indexMissing = division-prevMiddle;
                int tempCount = 0;
                prevMiddle = division;
                
            cout << "Count: " << count << endl;

                cout << "tempCount: " <<  tempCount << endl;
                cout << "indexMissing: " <<  indexMissing << endl;

                while (tempCount < indexMissing &&middleList->next!= nullptr ){
                    cout << "iterated" << endl;
                    middleList = middleList->next;
                    tempCount++;
                }
            }
            cout << "Middle: " << middleList->val << endl;
            cout << "prevMiddle: " << prevMiddle << endl;

            if (current->next == nullptr)
                break;
            current = current->next;

            count++;
            cout << "Next->Val: " << current->val << endl;
            cout << "Next->Next: " << current->next << endl;
            cout << "Count: " << count << endl;
            cout << "----" << endl;
        }
  
        return middleList;
    }
};