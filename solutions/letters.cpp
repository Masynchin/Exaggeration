#include <iostream>

using namespace std;

// filter string in imperative way :gross:
string filter(string s) {
	string res;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            res += s[i];
        }
    }
    return res;
}

int main() {
	string phrase;
	cout << "Input any phrase: ";
	getline(cin, phrase);
	string letters = filter(phrase);
    cout
		<< "There is "
		<< letters.size()
		<< " small letters in your phrase"
		<< endl;

	return 0;
}
