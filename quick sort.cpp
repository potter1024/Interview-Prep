int partition(int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    for (int j=low;j<high;j++)
    {
        if (arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}
void quickSort(int low, int high)
{
    if (low<high)
    {
        int p=partition(low,high);
        quickSort(low,p-1);
        quickSort(p+1,high);
    }
}
