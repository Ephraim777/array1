#include <iostream>


void print_dynamic_array(int* arr, int logical_size, int actual_size)
{
for (int i = 0; i < logical_size; i++)
{
    std::cout << "Enter arr["<< i <<"]: ";
    std::cin >> arr[i];
    std::cout << std::endl;
}
    std::cout << "Array: ";
    for (int i = 0; i < actual_size; i++)
    {
       if(i < logical_size)
       {
           std::cout << arr[i];
       }
       else
       {
           std::cout << "_";
       }
       std::cout << " ";
    }
}
int main()
{
int logical_size;
int actual_size;
while(true)
{
std::cout << "Enter actual size array: ";
std::cin >> actual_size;
std::cout << std:: endl;
std::cout << "Enter logical size array: ";
std::cin >> logical_size;
std::cout << std::endl;
if (logical_size <= actual_size)
{
    break;
}
else
{
std::cout << "logical size > actual size it is not correct\n";
}
}
int * arr = new int[actual_size];

    print_dynamic_array(arr,logical_size,actual_size);

delete [] arr;

    return 0;
}
