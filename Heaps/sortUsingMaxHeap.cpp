void heapify(int arr[], int n, int i)  {
      // Your Code Here
      int l = 2*i+1;
        int r = 2*i+2;
        int largest;
        if(l < n && arr[l] > arr[i])
            largest = l;
        else
            largest = i;
        if(r < n && arr[r] > arr[largest])
            largest = r;
        if( largest != i){
            int temp = arr[i];
            arr[i] = arr[largest];
            arr[largest] = temp;
            heapify(arr, n, largest);
        }
}

// Rearranges input array so that it becomes a min heap
void buildHeap(int arr[], int n)  {
    // Your Code Here
    for(int i = (n/2)-1; i>=0; i--)
        heapify(arr, n, i);
}
