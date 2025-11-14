1.
  #include <iostream>
#include <string>
using namespace std;

class city {
public:
    string name;
    long popln;

    void accept() {
        cout << "Enter the city name & population: ";
        cin >> name >> popln;
    }
};

int main() {
    city cities[5];
    long maxpopln = 0;
    string hp = "";

    for (int i = 0; i < 5; i++) {
        cities[i].accept();
        if (cities[i].popln > maxpopln) {
            maxpopln = cities[i].popln;
            hp = cities[i].name;
        }
    }

    cout << "\nCity with highest population: " << hp << " Population: " << maxpopln << endl;

    return 0;
}

2.
  #include <iostream>
#include <string>
using namespace std;

class Account {
public:
    int acc;
    double bal;

    void accept() {
        cout << "Enter the account number & balance: ";
        cin >> acc >> bal;
    }

    void display() {
        if (bal >= 5000.0) {
            double interest = bal * 0.10;
            cout << "Interest: " << interest << " NewBalance: " << bal + interest << endl;
        } else {
            cout << "No interest." << endl;
        }
    }
};

int main() {
    Account accounts[10];

    for (int i = 0; i < 10; i++) {
        accounts[i].accept();
    }

    cout << "\nAccounts with or without interest:\n";
    for (int i = 0; i < 10; i++) {
        accounts[i].display();
    }
    cout << endl;
    
    return 0;
}

3.
  #include <iostream>
#include <string>
using namespace std;

class Staff {
public:
    string name, post;

    void accept() {
        cout << "Enter staff member's name: ";
        cin >> name;
        cout << "Enter post (e.g., HOD, Teacher, etc.): ";
        cin >> post;
    }

    bool check() {
        return post == "HOD" || post == "hod";
    }
};

int main() {
    Staff staffMembers[5];

    for (int i = 0; i < 5; i++) {
        staffMembers[i].accept();
    }

    cout << "\nStaff who are HOD:\n";
    for (int i = 0; i < 5; i++) {
        if (staffMembers[i].check()) {
            cout << staffMembers[i].name << endl;
        }
    }
    return 0;
}
