#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(const vector<int>& arr, int left, int right, int x){
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == x)
        return mid;

    if (arr[mid] < x)
        return binarySearch(arr, mid + 1, right, x);

    return binarySearch(arr, left, mid - 1, x);
}

int main(){
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int x = 11;

    int result = binarySearch(arr, 0, arr.size() - 1, x);

    if (result == -1)
        cout << "elemento nao encontrado" << endl;
    else
        cout << "elemento encontrado na posicao: " << result << endl;

    return 0;
}