int countNodesinLoop(struct Node *head)
{
     // Code here
    map<Node *, int> mp;
    Node *temp = head;
    int pos = 1;
    while(temp){
        if(mp[temp])
            return pos-mp[temp];
        mp[temp] = pos++;
        temp = temp->next;
    }
    return 0;
}
