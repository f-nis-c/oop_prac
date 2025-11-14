1.
#include <iostream>
    #include <stack>
    using namespace std;
    int main() {
        stack <int> marks = { 20, 25, 30 };
        cout << marks.size();
        marks.push(40);
        marks.push(50);
        cout << marks.top();
        for (int i : marks) {
            cout << i;
        }
        cout << endl;
        cout << marks.pop();
        return 0;
    }
2.
#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue <int> marks = { 20, 25, 30, 27, 40 };
    cout << marks.size();
    marks.push(32);
    cout << marks.front() << " " << marks.back() << endl;
    for (int i : marks) {
        cout << i;
    }
    cout << endl;
    cout << marks.empty() << endl;
    cout << marks.pop() << endl;
    for (int i : marks) {
        cout << i;
    }
    return 0;
}
