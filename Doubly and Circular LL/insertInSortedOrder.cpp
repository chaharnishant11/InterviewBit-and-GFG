void sortedInsert(struct Node** head_ref, struct Node* newNode)
{
	// Code here
	struct Node* current;

    if (*head_ref == NULL)
        *head_ref = newNode;

    else if ((*head_ref)->data >= newNode->data) {
        newNode->next = *head_ref;
        newNode->next->prev = newNode;
        *head_ref = newNode;
    }else {
        current = *head_ref;
        while (current->next != NULL && current->next->data < newNode->data)
            current = current->next;

        newNode->next = current->next;

        if (current->next != NULL)
            newNode->next->prev = newNode;

        current->next = newNode;
        newNode->prev = current;
    }
}
