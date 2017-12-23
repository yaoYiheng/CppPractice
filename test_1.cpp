#include <iomanip>
#include <iostream>
using namespace std;

void sortArr(int arr_1[], float arr_2[], int m) {
  for (int i = 0; i < m - 1; i++) {
    for (int j = 0; j < m - i - 1; j++) {
      if (arr_2[j + 1] > arr_2[j]) {
        int tmp_1;
        float tmp_2;
        tmp_1 = arr_1[j];
        arr_1[j] = arr_1[j + 1];
        arr_1[j + 1] = tmp_1;
        tmp_2 = arr_2[j];
        arr_2[j] = arr_2[j + 1];
        arr_2[j + 1] = tmp_2;
      }
    }
  }
}

int main() {
  int arr_1[] = {1, 2, 3, 4, 5, 6};
  float arr_2[] = {3.4, 6.6, 7.0, 12.0, 1.5, 5.4};
  sortArr(arr_1, arr_2, 6);

  return 0;
}

