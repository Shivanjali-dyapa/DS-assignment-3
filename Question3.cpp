#include <vector>
#include <iostream>
int i;
void insertion_sort(std::vector<int>& num) {
  for (int j = 1; j < num.size(); j++) {
    int key = num[j];
    bool insertionNeeded = false;

    for ( i = j - 1; i >= 0; i--) {
      if (key < num[i]) {
        num[i + 1] = num[i];
        insertionNeeded = true;
      } else {
        break;
      }
    }

    if (insertionNeeded) {
      num[i + 1] = key;
    }
  }
}

int main() {
  std::vector<int> numbers = {5, 2, 9, 1, 6};

  std::cout << "Unsorted vector: ";
  for (int num : numbers) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  insertion_sort(numbers);

  std::cout << "Sorted vector: ";
  for (int num : numbers) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}
