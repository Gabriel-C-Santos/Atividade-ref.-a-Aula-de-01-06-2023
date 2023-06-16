#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}

int main() {
    int v[8] = {49, 38, 58, 87, 34, 93, 26, 13};
    int n = sizeof(v) / sizeof(v[0]);

    cout << "Vetor original: ";
    for (int i = 0; i < n; ++i) {
        std::cout << v[i] << " ";
    }
    cout << endl;

    insertionSort(v, n);

    cout << "Vetor ordenado: ";
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}