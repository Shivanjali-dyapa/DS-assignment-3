#ifndef LINEAR_SEARCH_LAST_H
#define LINEAR_SEARCH_LAST_H

#include <vector>

template<typename Item_Type>
int linear_search_last(const std::vector<Item_Type>& items, const Item_Type& target, int pos_last);

template<typename Item_Type>
int linear_search_last(const std::vector<Item_Type>& items, const Item_Type& target);

#endif // LINEAR_SEARCH_LAST_H
