#include <iostream>
#include <vector>

using namespace std;

vector< vector<int> > crossed(vector<int> digits) {
    vector< vector<int> > res;
    for (int i = 0; i < digits.size(); i++) {
        vector<int> with_crossed;
        with_crossed = digits;
        with_crossed.erase(with_crossed.begin() + i);
        res.push_back(with_crossed);
    }
    return res;
}

vector<int> to_digits(int number) {
    vector<int> digits;
    while (number > 0) {
        digits.push_back(number % 10);
        number /= 10;
    }
    reverse(digits.begin(), digits.end());
    return digits;
}

// better to implement with std::reduce,
// but I don't want to deal with cpp documentation crap
int number(vector<int> digits) {
    int number = 0;
    for (auto digit: digits) {
        number = number * 10 + digit;
    }
    return number;
}

// same with std::transform, also it is mutable
vector<int> to_numbers(vector< vector<int> > combs) {
    vector<int> numbers;
    for (auto digits: combs) {
        numbers.push_back(number(digits));
    }
    return numbers;
}

int max_number(vector<int> numbers) {
    return *max_element(numbers.begin(), numbers.end());
}

int main() {
    int number;
    cout << "Input some number: ";
    cin >> number;

    auto digits = to_digits(number);
    auto combinations = crossed(digits);
    auto numbers = to_numbers(combinations);
    auto highest = max_number(numbers);

    cout
        << "The maximum number with one crossed digit is "
        << highest
        << endl;

    return 0;
}
