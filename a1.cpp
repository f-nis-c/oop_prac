//extra before exp1
1.
#include <iostream>
using namespace std;
void main() {
    int a, b, c;
    cout << "enter a + b"; 
    cin >> a >> b;
    c = a + b;
    cout << "Sum = " << c;
}
2.
  #include <iostream>
using namespace std;

void main() {
    double n1, n2;
    char op;

    cout << "Enter first and second number: ";
    cin >> n1 >> n2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Sum = " << (n1 + n2) << endl;
            break;

        case '-':
            cout << "Difference = " << (n1 - n2) << endl;
            break;

        case '*':
            cout << "Product = " << (n1 * n2) << endl;
            break;

        case '/':
            if (n2 != 0)
                cout << "Quotient = " << (n1 / n2) << endl;
            else
                cout << "Error: Division by 0";
            break; 

        default:
            cout << "Error: Invalid operator";
    }
}
3
  #include <iostream>
using namespace std;

void main() {
    int num;
    cout << "Enter number to check even or odd: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "Number is even.";
    } else if (num % 2 != 0) {
        cout << "Number is odd.";
    } else {
        cout << "Error.";
    }
}
4.
  #include <iostream>
using namespace std;

void main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
}
5.
  #include <iostream>
using namespace std;

void main() {
    int i = 10;

    while (i >= 1) {
        cout << i << " ";
        i--;
    }
}
6.
  #include <iostream>
using namespace std;

void main() {

    cout << "Pattern a: star triangle" << endl;
    int n = 3;
    int k = n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j >= k) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << "Pattern b: Number triangle 1" << endl;

    for (int i = 0; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << "Pattern c: Number pattern 2" << endl;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

1.

  #include <iostream.h>
using namespace std;
class student {
    int roll-no; string name;
public:
    void get_data() {
        cout << "Enter student name and roll no. : ";
        cin >> name >> roll-no;
    }
    void display() {
        cout << "Name :\n" << name << "\n";
        cout << "Roll no :\n" << roll-no << "\n";
    }
};
int main() {
    student s1;
    s1.get_data();
    s1.display();
    return 0;
}

2.
  #include <iostream>
#include <string>
using namespace std;

class Book {
public:
    int price, page;
    string book_name;

    void accept() {
        cout << "Enter name, price and pages: ";
        cin >> book_name >> price >> page;
    }
};

int main() {
    Book b1, b2;
    
    cout << "--- Enter details for Book 1 ---\n";
    b1.accept(); 
    cout << "--- Enter details for Book 2 ---\n";
    b2.accept();

    cout << "Book with greater price: " 
         << ( (b1.price > b2.price) ? b1.book_name : b2.book_name )
         << endl;
         
    return 0;
}

3.
  #include <iostream>
using namespace std;

class time1 {
    int h, m, s;
public:
    void accept() {
        cout << "Enter time in HH:MM:SS format:" << endl;
        cout << "Hours (0-23): ";
        cin >> h;
        cout << "Minutes (0-59): ";
        cin >> m;
        cout << "Seconds (0-59): ";
        cin >> s;
    }

    void display() {
        cout << "\nEntered Time: " << h << ":" << m << ":" << s << endl;
        cout << "\nTotal Seconds: "
             << ( (long int)h * 3600 ) + ( (long int)m * 60 ) + ( (long int)s )
             << endl;
    }
};

int main() {
    time1 t1;
    t1.accept();
    t1.display();
    return 0;
}
