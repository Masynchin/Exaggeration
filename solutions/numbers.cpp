#include <iostream>
#include <set>
#include <sstream>
#include <vector>

using namespace std;

// console cpp bullshit :gross: * 2
vector<int> input_numbers() {
    vector<int> numbers;
    string line;
    getline(cin, line);
    istringstream iss(line);
    int n;
    while (iss >> n) {
        numbers.push_back(n);
    }
    return numbers;
}

int main() {
    cout << "Input some numbers separated by space: ";
    vector<int> numbers = input_numbers();
    set<int> unique(numbers.begin(), numbers.end());
    cout
        << "There are "
        << unique.size()
        << " unique numbers in your input"
        << endl;

	return 0;
}
