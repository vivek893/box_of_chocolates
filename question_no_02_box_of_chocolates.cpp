// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
     int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  int maxChocolates(ListNode*head){
      vector<int> ans;
        while(head!=NULL){
            ans.push_back(head->val);
            head=head->next;
        }
        int maxi=0;
        int i=0;
        int n=ans.size()-1;
        while(i<ans.size()){
            maxi=max(ans[i]+ans[n-i], maxi);
            i++;
        }
        return maxi;
  }


int main() {
    int n;

    cin >> n;

    ListNode* head = NULL;

    for (int i = 0; i < 2*n; i++) {
        int x;
        cin >> x;
        ListNode* newNode = new ListNode();
        newNode->val = x;
        newNode->next = head;
        head = newNode;
    }
    int res=maxChocolates(head);
    cout<<res;

    return 0;
}
