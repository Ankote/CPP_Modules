#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>


void upper_bound(std::vector<int> &numbers)
{
    
    std::vector<int> ww;
    ww.push_back(2);
    ww.push_back(3);
    int value_to_find = 3;
    std::vector<int>::iterator upper = std::upper_bound(numbers.begin(), numbers.end(), value_to_find);

    ww.insert(ww.end(), *upper);
    for (int i = 0; i < ww.size(); i ++)
    {
        std::cout << ww[i] << "";
    }
    std::cout << std::endl;
}

int main(int ac, char **argv)
{
    if (ac != 2)
    {
        std::cout << "ERROR! : Invalid args!!" << std::endl;
        return(0);
    }
    std::vector<int> arr;
    std::string data = argv[1];
    std::istringstream iss(data);
    std::string line;
    char *end;
    while (iss >> line)
    {
        double value = strtod(line.c_str(), &end);
        if (*end)
            return(std::cout << "ERROR!: input !!" << std::endl,0);
        else
            arr.push_back(value);
    }
    upper_bound(arr);
    std::cout << std::endl;
}