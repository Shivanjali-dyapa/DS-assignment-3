#include <vector>
#include<iostream>
template<typename Item_Type>
int linear_search_last(const std::vector<Item_Type>& items, const Item_Type& target, int pos_last) {
    if (pos_last < 0) 
        return -1;

    if (target == items[pos_last]) 
        return pos_last;
    
    return linear_search_last(items, target, pos_last - 1);
}

template<typename Item_Type>
int linear_search_last(const std::vector<Item_Type>& items, const Item_Type& target) {
    return linear_search_last(items, target, items.size() - 1);
}

int main() {
    std::vector<int> numbers = {1, 5, 5, 5, 5};
    int target = 5;

    int last_position = linear_search_last(numbers, target);
    if (last_position != -1) {
        std::cout << "Target " << target << " found last at position: " << last_position << std::endl;
    } else {
        std::cout << "Target " << target << " not found." << std::endl;
    }

    return 0;
}
