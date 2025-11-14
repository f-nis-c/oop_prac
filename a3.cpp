1.
  #include <iostream>
#include <string>
using namespace std;

class book {
    int price;
    string book_title, author_name;
public:
    void accept() {
        cout << "Book title: " << book_title << ", Author name: " << author_name << endl;
        cout << "Enter Book title, Author name, and Price: ";
        cin >> book_title >> author_name >> price;
    }
    void display() {
        cout << "Book title: " << book_title << endl;
        cout << "Author name: " << author_name << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    book b1;
    book *p1;
    p1 = &b1;
    
    p1->accept();
    p1->display();
    return 0;
}

2.
  #include <iostream>
using namespace std;

class student {
    int roll, perc;
public:
    void accept() {
        cout << "Enter roll no. & percentage: ";
        cin >> this->roll >> this->perc;
    }
    void display() {
        cout << "Roll no: " << roll;
        cout << "Percentage: " << perc;
    }
};

int main() {
    student s1;
    s1.accept();
    s1.display();
    return 0;
}

3.
  #include <iostream>
#include <string>
using namespace std;

class student {
    string name;
    int rollNumber;

    class marks {
        int math, sci, eng;
    public:
        marks(int maths, int science, int english) {
            math = maths;
            sci = science;
            eng = english;
        }

        void displayMarks() const {
            cout << "Math: " << math << endl;
            cout << "Science: " << sci << endl;
            cout << "English: " << eng << endl;
        }
    };

    marks sm;

public:
    student(string studentName, int studentRoll, int math, int science, int english)
        : name(studentName), rollNumber(studentRoll), sm(math, science, english) {}

    void displayStudentDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll no: " << rollNumber << endl;
        cout << "Marks Details:" << endl;
        sm.displayMarks();
    }
};

int main() {
    string studentName;
    int rollNumber, mathMarks, scienceMarks, englishMarks;

    cout << "Enter student name, roll no, math marks, science marks & english marks: ";
    cin >> studentName >> rollNumber >> mathMarks >> scienceMarks >> englishMarks;

    student student1(studentName, rollNumber, mathMarks, scienceMarks, englishMarks);

    cout << "\nStudent Details:\n";
    student1.displayStudentDetails();
    
    return 0;
}
