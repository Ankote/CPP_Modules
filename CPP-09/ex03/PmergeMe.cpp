#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}
void PmergeMe::insetionSort(std::vector<int> &arr)
{
    PmergeMeFun(arr);
    std::sort(array1.begin(),array1.end()); 
    std::vector<int>::iterator it;
    std::vector<int>::iterator it2  = array2.begin();

    while(it2 != array2.end())
    {
        it = std::upper_bound(array1.begin(), array1.end(), *it2);
        array1.insert(it, *it2);
        it2++;
    }
}

void PmergeMe::PmergeMeFun(std::vector<int> &arr)
{
    if (arr.size() <= 2)
    {   
        std::sort(arr.begin(), arr.end());
        if(arr.size() == 2)
        {
            array1.push_back(arr[0]);
            array2.push_back(arr[1]);
        }
        else
            array1.push_back(arr[0]);
    }
    else
    {
        size_t mid = arr.size() / 2;
        std::vector<int> subVec1(arr.begin() , arr.begin() + mid);
        std::vector<int> subVec2(arr.begin() + mid, arr.end());
        PmergeMeFun(subVec1);
        PmergeMeFun(subVec2);
    }
}

void PmergeMe::printNumbers(std::vector<int> &arr)
{
    std::cout << "Before: ";
    for (size_t i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "After : ";
    clock_t start_time = clock();
    this->insetionSort(arr);
    clock_t end_time = clock();
    for (size_t i = 0; i < array1.size(); i++)
    {
        std::cout << array1[i] << " ";
    }
    double elapsed_time = (static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC) * 10000 ; // Convert to microseconds
    std::cout << "Time to process a range of " << array1.size() << " elements with std::vector: " << elapsed_time << " us" << std::endl;
    std::cout << std::endl;
}