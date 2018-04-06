#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i;
    int x;
    cin >> i;
    int arr[i];
    for(int index = 0; index < i; index++) {
        cin >> x;
        arr[index] = x;
    }
    for(int end = i - 1; end >= 0; end--) {
        cout << arr[end] << " ";
    }

    return 0;
}
