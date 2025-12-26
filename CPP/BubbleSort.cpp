#include <iostream>
using std::cout, std::cin, std::string;

void sortArray(int array[], int size) {
    bool isSorted;
    for (int i = 0; i < size - 1; i++) {
        isSorted = true;
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                std::swap(array[j], array[j + 1]);
                isSorted = false;
            }
        }
        if (isSorted) {
            break;
        }
    }

    cout << "The sorted array is [ ";
    for (int i = 0; i < size; i++) {
        cout << array[i];
        if (i < size - 1) cout << ", ";
    }
    cout << " ]";
}

int main() {
    int array[] = {2, 1, 6, 4, 7, 9, 8};
    int size = sizeof(array) / sizeof(int);
    sortArray(array, size);
    return 0;
}
