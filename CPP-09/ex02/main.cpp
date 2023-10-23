#include <iostream>
#include <vector>
#include <ctime>

//using int insteade of size_t becsuze j can be -1 if the number would be in the front
void insertionSort(std::vector<int> &arr, int start, int end)
{
    for (int i = start + 1; i <= end; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= start && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void insertionSort(std::deque<int> &arr, int start, int end)
{
    for (int i = start + 1; i <= end; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= start && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void merge(std::vector<int>& arr, int left, int mid, int right)
{
    size_t size1 = mid - left + 1;
    size_t size2 = right - mid;
   
    std::vector<int> leftSubArr(size1);
    std::vector<int> rightSubArr(size2);
    size_t k = left;
    for (size_t i = 0; i < size1; i++)
        leftSubArr[i] = arr[k++];
    for (size_t i = 0; i < size2; i++)
        rightSubArr[i] = arr[k++];
    
    int j = 0;
    int i = 0;
    k = left;
    
    while(i < size1 && j < size2)
    {
        if (leftSubArr[i] <= rightSubArr[j])
        {
            arr[k++] = leftSubArr[i++];
        }
        else
        {
            arr[k++] = rightSubArr[j++];
        }
    }
    while(i < size1)
    {
        arr[k++] = leftSubArr[i++];
    }
    while (j < size2)
    {
        arr[k++] = rightSubArr[j++];
    }
}

void merge(std::deque<int>& arr, int left, int mid, int right)
{
    size_t size1 = mid - left + 1;
    size_t size2 = right - mid;
   
    std::deque<int> leftSubArr(size1);
    std::deque<int> rightSubArr(size2);
    size_t k = left;
    for (size_t i = 0; i < size1; i++)
        leftSubArr[i] = arr[k++];
    for (size_t i = 0; i < size2; i++)
        rightSubArr[i] = arr[k++];
    
    int j = 0;
    int i = 0;
    k = left;
    
    while(i < size1 && j < size2)
    {
        if (leftSubArr[i] <= rightSubArr[j])
        {
            arr[k++] = leftSubArr[i++];
        }
        else
        {
            arr[k++] = rightSubArr[j++];
        }
    }
    while(i < size1)
    {
        arr[k++] = leftSubArr[i++];
    }
    while (j < size2)
    {
        arr[k++] = rightSubArr[j++];
    }
}

void ford_johnson_sort(std::vector<int>& arr, int left, int right, int threshold)
{
    if (left < right)
    {
        if (right - left + 1 <= threshold)
        {
            insertionSort(arr, left, right);
        }
        else
        {
            // Recursively divide and merge subarrays
            int mid = left + (right - left) / 2;
            ford_johnson_sort(arr, left, mid, threshold);
            ford_johnson_sort(arr, mid + 1, right, threshold);
            merge(arr, left, mid, right);
            // std::merge(arr.begin(), arr.begin() + left, arr.begin() + mid, arr.begin() + right,arr.begin());
        }
    }
}

void ford_johnson_sort(std::deque<int>& arr, int left, int right, int threshold)
{
    if (left < right)
    {
        if (right - left + 1 <= threshold)
        {
            insertionSort(arr, left, right);
        }
        else
        {
            // Recursively divide and merge subarrays
            int mid = left + (right - left) / 2;
            ford_johnson_sort(arr, left, mid, threshold);
            ford_johnson_sort(arr, mid + 1, right, threshold);
            merge(arr, left, mid, right);
            // std::merge(arr.begin(), arr.begin() + left, arr.begin() + mid, arr.begin() + right,arr.begin());
        }
    }
}

void mergeSort(std::vector<int>& arr, int left, int right) 
{
    if (left   < right)
    {
        if(right - left + 1 <= 5)
            insertionSort(arr, left, right);
        else
        {
            int mid = left + (right - left) / 2; 
            mergeSort(arr, left, mid);
            mergeSort(arr, mid + 1, right);
            merge(arr, left, mid, right);
        }
    }
}

int main()
{
    c 
    // Initialize the array with data (you can modify this part as needed)

    // Start the timer
    // Initialize the array with data (you can modify this part as needed)
    // Start the timer
    clock_t start_time = clock();

    // Perform the sorting operation
    // bubbleSort(arr);
    mergeSort(arr,0, 2999);
    // ford_johnson_sort(arr, 0, 2999, 5) ;
    // Stop the timer
    clock_t end_time = clock();

    // Calculate the elapsed time in milliseconds (approximation)
    double elapsed_time = (static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC) * 1000;

    std::cout << "Sorting time: " << elapsed_time << " milliseconds" << std::endl;

    for (int i = 0; i < 3000; i ++)
    {
        std::cout << arr[i] << " " ;
    }
    std::cout  << std::endl;
    return 0;
}




// int main(int argc, char **argv)
// {
//     if (argc != 2)
//     {
//         std::cout << "ERROR!" << std::endl;
//     }
//     else
//     {
        
//     }
// }