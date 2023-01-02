#include <iostream>
#include <tuple>

using namespace std;

tuple<int, int> to_decimal(string b) {
    int decimal = 0;
    for (auto digit : b) {
        if (digit == '1') {
            decimal = decimal * 2 + 1;
        } else if (digit == '0') {
            decimal = decimal * 2;
        } else {
            return {1, 0};
        }
    }
    return {0, decimal};
}

int main() {
    string binary;
    cout << "Input number in binary: ";
    cin >> binary;
    auto [status, decimal] = to_decimal(binary);
    if (status == 1) {
        cout << "There are invalid symbols in provided binary number" << endl;
    } else {
        cout << "In decimal it would be " << decimal << endl;
    }
    
    return 0;
}
