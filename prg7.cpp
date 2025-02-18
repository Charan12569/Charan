#include <iostream>
#include <vector>
#include <string>

using namespace std;

string even_odd_labels(const vector<int>& A) {
    string result = "";
    
    // Loop through the array and check if each number is even or odd
    for (int num : A) {
        if (num % 2 == 0) {
            result += "Even";
        } else {
            result += "Odd";
        }
    }
    
    return result;
}

int main() {
    // Example Test Cases
    vector<int> A1 = {1, 2, 3, 4, 5, 6};
    vector<int> A2 = {2, 3, 4};

    cout << even_odd_labels(A1) << endl; // Output: "OddEvenOddEvenOddEven"
    cout << even_odd_labels(A2) << endl; // Output: "EvenOddEven"

    return 0;
}
