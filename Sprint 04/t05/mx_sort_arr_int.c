void mx_sort_arr_int(int *arr, int size)
{
    int buff;
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1; j++)
        {
            if(arr[j] > arr[i + 1])
            {
                buff = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = buff;
            }
        }
    }
}

