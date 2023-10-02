#include <iostream>
#include <vector>
#include <algorithm>

#include "sum_functor.h"
#include "count_functor.h"

int main()
{
    std::vector<int> data {4, 1, 3, 6, 25, 54};
    
    std::cout << "[IN]:";
    std::for_each(data.begin(), data.end(), [](const int &element) {std::cout << " " << element;});
    std::cout << std::endl;
    
    SumFunctor<int> get_sum(data);
    CountFunctor get_count(data);
    
    std::cout << "[OUT]: get_sum() = " << get_sum() << std::endl;
    std::cout << "[OUT]: get_count() = " << get_count() << std::endl;
    
    return 0;
}
