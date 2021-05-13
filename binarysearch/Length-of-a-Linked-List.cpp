/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node) {
    int i=0;
    while(node!=NULL)
    {
        node=node->next;
        i++;
    }
    return i;
}