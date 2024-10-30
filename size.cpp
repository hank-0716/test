#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

void print_arr(int* arr, int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << '\n';
}

void change_size(int*& arr, int size, int new_size) {
    int* new_arr = new int[new_size];
    int* recycler = arr;
    copy(arr, arr + size, new_arr);//把舊陣列複製到新陣列

    for (int i = 0; i < new_size; i++) {
        if (i < size) {
            new_arr[i];
        }
        else
            new_arr[i] = 0;//多出來的陣列設0
    }

    delete[] recycler;//回收舊陣列記憶體
    arr = new_arr;
}

int main() {
    int size = 3;
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    };

    print_arr(arr, size);  

    int new_size = pow(size,2); //新陣列大小設原本大小的平方
    change_size(arr, size, new_size);
    print_arr(arr, new_size);  
}