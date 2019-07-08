void printSpiral(Node *root){
     queue<Node *> q;
     q.push(root);
     q.push(NULL);
     vector<vector<int> > v;
     vector<int> temp;
     while(!q.empty()){
         Node *front=q.front();
         q.pop();
         if(front!=NULL){
             temp.push_back(front->data);
             if(front->left){
                q.push(front->left);
              }
             if(front->right){
                q.push(front->right);
             }
         }
         else{
             if(!q.empty()){
                 v.push_back(temp);
                 temp.clear();
                 q.push(NULL);
             }
         }
     }
     v.push_back(temp);
     for(int i=0;i<v.size();i++){
         if(i%2==0){
             for(int j=v[i].size()-1;j>=0;j--){
                cout<<v[i][j]<<" ";
            }
         }
         else{
             for(int j=0;j<v[i].size();j++){
                cout<<v[i][j]<<" ";
            }
         }
     }
}
