void diagonalSum(Node* root)
{
 // Add your code here
    map<int,vector<int> > m;
    queue<pair<Node*,int> > q;
    q.push(make_pair(root,-1));
    while(!q.empty())
    {
        int k=q.size();
        while(k--)
        {
            Node* temp=q.front().first;
            int hd=q.front().second;
            q.pop();
            m[hd].push_back(temp->data);
            if(temp->left)
            q.push(make_pair(temp->left,hd-1));
            if(temp->right)
            q.push(make_pair(temp->right,hd));
        }
    }
    map<int,vector<int> >::reverse_iterator it;
    for(it=m.rbegin();it!=m.rend();it++)
    {
        int n=it->second.size();
        int sum=0;
        for(int i=0;i<n;i++)
        sum+=it->second[i];
        cout<<sum<<" ";
    }
    cout<<endl;
}
