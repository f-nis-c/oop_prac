1.
#include <iostream>
using namespace std;
class Sum{
public: 
    int n=0, sum1=0;
    Sum(){n = 0; sum1=0;cout<<"Sum :"<<sum1<<endl;};
    Sum(int n){
        for (int i=1;i<=n;i++){sum1+=i;}
        cout<<"Sum: "<<sum1<<endl;
    };
    Sum(Sum& n1){
        n=n1.n; sum1=n1.sum1;
        cout<<"Sum: "<<n1.sum1<<endl;
    };
};
int main()
{Sum s1,s2(5),s3(s2);return 0;}

2.
#include <iostream>
using namespace std;
class Student{
public: 
    string name; float percentage;
    Student(){
        name="Falak"; percentage=94.3;
        cout<<"Name:"<<name<<endl<<"Percentage:"<<percentage<<endl;
    };
    Student(string n1,float p1){
        name=n1; percentage=p1;
        cout<<"Name:"<<name<<endl<<"Percentage:"<<percentage<<endl;
    };
    Student(Student& s){
        string name=s.name; float percentage=s.percentage;
        cout<<"Name:"<<name<<endl<<"Percentage:"<<percentage<<endl;
    };
};
int main()
{
    Student s1,s2("Kanak",93.5),s3(s2);
    return 0;
}

3.
#include <iostream>
using namespace std;
string name; int rollno; string course;
class College{
public: 
    College(string n1, int rn){
        name=n1; rollno=rn; course="Computer Engg.";
    };
    void disp(){
        cout<<"Name:"<<name<<endl<<"Roll no:"<<rollno<<endl<<"Course: "<<course<<endl;
    }
};
void acc(){
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter roll no:";
    cin>>rollno;
}
int main()
{
    acc();
    College s1(name,rollno);
    s1.disp();
    acc();
    College s2(name,rollno);
    s2.disp();
    return 0;
}

4.
#include <iostream>
using namespace std;

class rectangle {
public:
    int l, b;
    rectangle() {l = 2;b = 3;}
    rectangle(int x) {l = b = x;}
    rectangle(int x, int y) {l = x;b = y;}
    void area() {cout << "Area = " << l * b << endl;}
};

int main() {
    rectangle r,r1(4),r2(4,5);
    r.area();
    r1.area(); 
    r2.area();
    return 0;
}
