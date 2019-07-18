void topView(Node *root)
{
    // Your code here
    map<int,int> m;
    queue<pair<struct Node*,int> > que;
    que.push(make_pair(root,0));

    while(!que.empty())
    {
        pair<struct Node*,int> cur=que.front();
        que.pop();
        if(m.find(cur.second)==m.end())
        {
            cout<<cur.first->data<<" ";
            m[cur.second]=cur.first->data;
        }
        if(cur.first->left)
        que.push(make_pair(cur.first->left,cur.second-1));
        if(cur.first->right)
        que.push(make_pair(cur.first->right,cur.second+1));

    }
}
