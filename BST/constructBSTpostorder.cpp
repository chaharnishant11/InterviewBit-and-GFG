Node* construct(int postorder[], int start, int end){
	if (start > end)
		return NULL;
	struct Node *node=new Node();
	node->data=postorder[end];
	int i;
	for (i = end; i >=start; i--) {
		if (postorder[i] < node->data)
			break;
	}
	node->right = construct(postorder, i+1, end - 1);
	node->left = construct(postorder, start, i);
	return node;
}

Node *constructTree (int post[], int size)
{
//code here
    return construct(post,0,size-1);
}
