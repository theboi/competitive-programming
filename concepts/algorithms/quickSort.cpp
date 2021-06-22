
// int quicksort(uint n, int arr[]) {
//   int pivot = arr[n];
//   deque<int> temp;
//   temp.push_back(pivot);

//   for (int i=0;i<n-1;++i) {
//     if (arr[i] < pivot) temp.push_back(arr[i]);
//     else temp.push_front(arr[i]);
//   }
// }

/* low  --> Starting index,  high  --> Ending index */
int quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  // Before pi
        quickSort(arr, pi + 1, high); // After pi
    }
}

int partition(int arr[], int low, int high)
{
    // pivot (Element to be placed at right position)
    pivot = arr[high];  
 
    i = (low - 1)  // Index of smaller element

    for (j = low; j <= high- 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++;    // increment index of smaller element
            swap arr[i] and arr[j]
        }
    }
    swap arr[i + 1] and arr[high])
    return (i + 1)
}