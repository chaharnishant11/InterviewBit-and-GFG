void verticalOrder(Node *root)
{
    //Your code here
    if (!root)
        return;
    map < int,vector<int> > m;
    int hd = 0;
    queue<pair<Node*, int> > que;
    que.push(make_pair(root, hd));
     while (!que.empty()){
        pair<Node *,int> temp = que.front();
        que.pop();
        hd = temp.second;
        Node* node = temp.first;
        m[hd].push_back(node->data);

        if (node->left != NULL)
            que.push(make_pair(node->left, hd-1));
        if (node->right != NULL)
            que.push(make_pair(node->right, hd+1));
    }
    map< int,vector<int> > :: iterator it;
    for (it=m.begin(); it!=m.end(); it++)
    {
        for (int i=0; i<it->second.size(); ++i)
            cout << it->second[i] << " ";
    }

}
