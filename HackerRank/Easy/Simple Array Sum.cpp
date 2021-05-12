// https://www.hackerrank.com/challenges/simple-array-sum/problem

#include <iostream>

using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[1000];
    int sum=0;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << sum;
    return sum;
}