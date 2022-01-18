#include <algorithm>
#include <iostream>
#include <vector>

void print_array(const unsigned int length, const std::vector<int> &arr)
{
    unsigned int end = length - 1;
    for(int i = 0; i < end; ++i)
    {
        std::cout << arr[i] << ", ";
    }
    std::cout << arr[length - 1] << '\n';
}

int main(int argc, char **argv)
{
    if(argc == 1)
    {
        std::cerr << "Provide a list of integers\n";
        return 1;
    }
    const unsigned int length = argc - 1;
    std::vector<int> arr(length);
    for(int i = 0; i < length; ++i)
    {
        arr[i] = std::stoi(argv[i + 1], 0, 10);
    }
    std::sort(arr.begin(), arr.end());
    print_array(length, arr);
    return 0;
}