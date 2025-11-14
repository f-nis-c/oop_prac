#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <int> num = { 10, 20, 40, 50, 60 };
    cout << "Original vector: " << endl;
    for (int j = 0; j < num.size(); j++) {
        cout << num[j] << " ";
    }
    cout << endl;
    int x, num;
    cout << "Enter index to modify: " << endl;
    cin >> x;
    cout << "Enter new value: ";
    cin >> num;

    for (int j = 0; j < num.size(); j++) {
        if (j == x) {
            num[j] = num;
        }
    }
    cout << "New vector: " << endl;
    for (int j = 0; j < num.size(); j++) {
        cout << num[j] << " ";
    }
    cout << endl;
    //scalar
    int s = 10;
    //multiply & display
    for (int j = 0; j < num.size(); j++) {
        num[j] = num[j] * s;
        cout << num[j] << " ";
    }
    cout << endl;
    //display
    //without iterators
    for (int n : num) {
        cout << n << " ";
    }
    cout << endl;
    //with iterators
    for (vector<int>::iterator it = num.begin(); it != num.end(); it++) {
        cout << *it << " ";
    }
    return 0;
}
