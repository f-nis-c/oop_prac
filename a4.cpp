#include <iostream>
using namespace std;
class num{
public:
int n1, n2;
void accept(){
cout<<"Enter first number: "<<endl;
cin>>n1;
cout<<"Enter second number: "<<endl;
cin>>n2;
}
void display(){
cout<<"Num 1: "<<n1<<endl;
cout<<"Num 2: "<<n2<<endl;
}
void swap(num) {
int temp=n1;
n1=n2;
n2=temp;
cout<<"Swapped: \n First number: "<<n1<<"\n Second number: "<<n2<<endl;
}
}nu;
int main(){
nu.accept();
nu.display();
nu.swap(nu);
return 0;
}

#include <iostream>
using namespace std;
class num{
public:
int n1, n2;
void accept(){
cout<<"Enter first number: "<<endl;
cin>>n1;
cout<<"Enter second number: "<<endl;
cin>>n2;
}
void display(){
cout<<"Num 1: "<<n1<<endl;
cout<<"Num 2: "<<n2<<endl;
}
}nu;
void swap(num) {
int temp=nu.n1;
nu.n1=nu.n2;
nu.n2=temp;
cout<<"Swapped: \n First: "<<nu.n1<<"\n Second: "<<nu.n2<<endl;
}
int main(){
nu.accept();
nu.display();
swap(nu);
return 0;
}

#include <iostream>
using namespace std;
class num1{
public:
int n1;
void accept(){
cout<<"Enter first number: "<<endl;
cin>>n1;}
void display() { cout<<"Num 1: "<<n1<<endl;}
}nu1;
class num2{
public:
int n2;
void accept(){
cout<<"Enter second number: "<<endl;
cin>>n2;}
void display() { cout<<"Num 2: "<<n2<<endl;}
}nu2;
void swap(num1, num2){
int temp=nu1.n1;
nu1.n1=nu2.n2;
nu2.n2=temp;
cout<<"Swapped: \n First: "<<nu1.n1<<"\n Second: "<<nu2.n2<<endl;
}
int main(){
nu1.accept();
nu2.accept();
nu1.display();
nu2.display();
swap (nu1, nu2);
return 0;
}

#include <iostream>
using namespace std;
class Result1{
public:
int r1;
void accept(){
cout<<"Enter first result: "<<endl;
cin>>r1;}
}res1;
class Result2{
public:
int r2;
void accept(){
cout<<"Enter second result: "<<endl;
cin>>r2;}
}res2;
float avg (Result1, Result2){
return (res1.r1+res2.r2)/2;
}
int main(){
res1.accept();
res2.accept();
float avrg=avg(res1, res2);
cout<<"Average: "<<avrg;
return 0;
}

#include <iostream>
using namespace std;
class num1{
public:
int n1;
void accept(){
cout<<"Enter first number: "<<endl;
cin>>n1;}
}nu1;
class num2{
public:
int n2;
void accept(){
cout<<"Enter second number: "<<endl;
cin>>n2;}
}nu2;
int gnum(int n1, int n2){return (n1>n2?n1:n2);}
int main(){
nu1.accept();
nu2.accept();
int gr = gnum(nu1.n1,nu2.n2);
cout<<"Greatest: "<<gr<<endl;
return 0;
}

#include <iostream>
using namespace std;
class ClassB;
class ClassA {
int A;
public:
void accept() {
cout << "Enter value for A: ";
cin >> A;
}
friend int sum(ClassA OA, ClassB OB);
}na;
class ClassB {
int B;
public:
void accept() {
cout << "Enter value for B: ";
cin >> B;
}
friend int sum(ClassA OA, ClassB OB);
}nb;
int sum(ClassA OA, ClassB OB) {
return oA.A + OB.B;
}
int main() {
na.accept();
nb.accept();
cout << "Sum: " << sum(na, nb) << endl;
return 0;
}

#include <iostream>
using namespace std;
class Number {
int num;
public:
void accept() {
cout << "Enter value: ";
cin >> num;
}
void display() {
cout<< "Value:"<<num << endl;
}
friend void swapNumbers (Number& num1, Number& num2);
};
void swapNumbers (Number& num1, Number& num2) {
int temp = num1.num;
num1.num = num2.num;
num2.num = temp;
}
int main() {
Number n1, n2;
n1.accept();
n2.accept();
cout << "Before swap:" << endl;
n1.display();
n2.display();
swapNumbers (n1, n2);
cout << "After swap:" << endl;
n1.display();
n2.display();
return 0;
}

#include <iostream>
using namespace std;
class Cube;
class Box {
double v;
public:
void accept() {
double l, w, h;
cout << "Enter length, width, and height for the Box: ";
cin >> l >> w >> h;
v = l * w * h;
}
friend void findGreater (Box b, Cube c);
} b;
class Cube {
double v;
public:
void accept() {
double s;
cout << "Enter side length for the Cube: ";
cin >> s;
v = s * s * s;
}
friend void findGreater (Box b, Cube c);
} c;
void findGreater (Box b, Cube c) {
string res = (b.v > c.v) ? "Box" : ((c.v > b.v) ? "Cube" : "Both equal.");
cout << "Greater Volume: " << res << endl;
}
int main() {
b.accept();
c.accept();
findGreater (b, c);
return 0;
}

#include <iostream>
using namespace std;
class Complex {
double r, i;
public:
void accept() {
cout << "Enter real and imaginary parts: ";
cin >> r >> i;
}
void display() {
cout << r << " + " << i << "i" << endl;
}
friend Complex add(Complex c1, Complex c2);
};
Complex add (Complex c1, Complex c2) {
Complex sum;
sum.r = c1.r + c2.r;
sum.i = c1.i + c2.i;
return sum;
}
int main() {
Complex c1, c2;
c1.accept();
c2.accept();
Complex sum = add(c1, c2);
cout << "The sum is: ";
sum.display();
return 0;
}

#include <iostream>
using namespace std;
class Student {
string n;
int m[3];
public:
void accept() {
cout << "Enter student name: ";
cin >> n;
cout << "Enter marks for three subjects: ";
cin >> m[0] >> m[1] >> m[2];
}
friend void calculateAverage (Student s);
};
void calculateAverage (Student s) {
double avg = (s.m[0] + s.m[1] + s.m[2]) / 3.0;
cout << "Student: " << s.n << endl;
cout << "Average Marks: " << avg << endl;
}
int main() {
Student s;
s.accept();
calculateAverage(s);
return 0;
}

#include <iostream>
using namespace std;
class Beta;
class Gamma;
class Alpha {
int n;
public:
void accept() {
cout << "Enter value for Alpha: ";
cin >> n;
}
friend int sum(Alpha a, Beta b, Gamma c);
} a;
class Beta {
int n;
public:
void accept() {
cout << "Enter value for Beta: ";
cin >> n;
}
friend int sum(Alpha a, Beta b, Gamma c);
} b;
class Gamma {
int n;
public:
void accept() {
cout << "Enter value for Gamma: ";
cin >> n;
}
friend int sum(Alpha a, Beta b, Gamma c);
} c;
int sum(Alpha a, Beta b, Gamma c) {
return a.n + b.n + c.n;
}
int main() {
a.accept();
b.accept();
c.accept();
cout << "Sum: " << sum(a, b, c) << endl;
return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
class Point {
double x, y;
public:
void accept() {
cout << "Enter x and y coordinates: ";
cin >> x >> y;
}
friend double dist (Point p1, Point p2);
} p1, p2;
double dist (Point p1, Point p2) {
double dx = p1.x - p2.x;
double dy = p1.y - p2.y;
return sqrt((dx * dx) + (dy * dy));
}
int main() {
p1.accept();
p2.accept();
cout << "Distance: " << dist(p1, p2) << endl;
return 0;
}

#include <iostream>
using namespace std;
class BankAccount;
class Audit {
public:
void pBal(BankAccount);
} aud;
class BankAccount {
double b;
public:
void accept() {
cout << "Enter bank account balance: ";
cin >> b;
}
friend void Audit::pBal(BankAccount);
} ba;
void Audit::pBal(BankAccount) {
cout << "Auditing... Bank Account balance: " << ba.b << endl;
}
int main() {
ba.accept();
aud.pBal(ba);
return 0;
}
