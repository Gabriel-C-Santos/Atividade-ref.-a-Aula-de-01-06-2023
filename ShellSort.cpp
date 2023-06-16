#include <iostream>
using namespace std;

void shellSort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; ++i) {
            int temp = arr[i];
            int j;

            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }

            arr[j] = temp;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int v[8] = {49, 38, 58, 87, 34, 93, 26, 13};
    int n = sizeof(v) / sizeof(v[0]);

    cout << "Vetor original: ";
    printArray(v, n);

    shellSort(v, n);

    cout << "Vetor ordenado: ";
    printArray(v, n);

    return 0;
}
