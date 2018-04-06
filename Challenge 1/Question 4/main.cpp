#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n1;
    int n2;
    cin >> n1 >> n2;
    vector< vector<int> > arr(n1);
    for(int i = 0; i < n1; i++) {
        int size;
        cin >> size;
        for (int j = 0; j < size; j++) {
            int elements;
            cin >> elements;
            arr[i].push_back(elements);
        }
    }

    for (int i = 0; i < n2; i++) {
        int x;
        int y;
        cin >> x >> y;
        cout << arr[x][y] << endl;
    }
    return 0;
}
