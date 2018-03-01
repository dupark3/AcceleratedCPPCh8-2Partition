#include <iostream>
#include <iterator>
#include <vector>

#include "my_partition.h"

bool IsEven(int n){
    return (n % 2) == 0;
}

int main(){
    int myints[] = {1, 2, 3, 4, 5};
    std::vector<int> vec (myints, myints + sizeof(myints) / sizeof(int));

    // print the original vector
    std::cout << "Original vector: ";
    for (std::vector<int>::size_type i = 0; i != vec.size(); ++i)
        std::cout << vec[i] << " ";
    std::cout << std::endl;

    // put even numbers at the front and odd numbers at the back
    my_partition(vec.begin(), vec.end(), IsEven);
    std::cout << "The result of partitioning even numbers: ";
    for (std::vector<int>::size_type i = 0; i != vec.size(); ++i)
        std::cout << vec[i] << " ";

    return 0;
}
