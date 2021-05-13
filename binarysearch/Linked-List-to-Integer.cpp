/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node) {
    int len=0;
    vector<int> t;
    LLNode* p=node;
    while(node!=NULL)
    {   len++;
        
        t.push_back(node->val);
        node=node->next;
    }
    len--;
    int sum=0;
    for(int i=0;i<t.size();i++)
    {
        sum = sum + pow(2,len--)*t[i];
    }
    return sum;
}