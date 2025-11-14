1.
    #include <iostream>
    using namespace std;
    template <class T> 
    T sumn(T arr[],int n){
        T sum=0;
        for(int i=0; i<n;i++){sum+=arr[i];}
        return sum;
    }
    int main(){ 
        int arr1[5]={1,2,3,4,5}; 
        float arr2[5]={1.1,2.2,3.3,4.4,5.5};
        double arr3[5]={1.1,2.2,3.3,4.4,5.5};
        cout<<"For int: \n";
        int sum1=sumn(arr1,5);
        cout<<"Sum: "<<sum1;
        cout<<"\nFor float: \n";
        float sum2=sumn(arr2,5);
        cout<<"Sum: "<<sum2;
        cout<<"\nFor double: \n";
        double sum3=sumn(arr3,5);
        cout<<"Sum: "<<sum3;
        return 0;
    }
2.
    #include <iostream>
    using namespace std;
    template <class T> T sq(T n){return n*n;}
    template <> string sq(string str){return str+str;}
    int main(){ string str="Boom";
        cout<<"For int: \n"<<sq(2);
        cout<<"\nFor float: \n"<<sq(2.5);
        cout<<"\nFor string: \n"<<sq(str);
        return 0;
    }
3.
#include <iostream>
#include <cmath>
using namespace std;
template <class T> class Cal {
public:
    T num1=0, T num2=0;

    void acc() { cout << "Enter two numbers: "; cin >> num1 >> num2; }
    void add() { acc(); cout << "\n Sum: " << num1 + num2; }
    void sub() { acc(); cout << "\n Difference: " << num1 - num2; }
    void mul() { acc(); cout << "\n Product: " << num1 * num2; }
    void div() { acc(); cout << "\n Quotient: " << num1 / num2; }
    void mod() { acc(); cout << "\n Remainder: " << num1 % num2; }
    void powl() { acc(); cout << "\n Power/Exponent: " << pow(num1, num2); }
    void max() { acc(); cout << "\n Max: " << (num1 > num2 ? num1 : num2); }
    void min() { acc(); cout << "\n Min: " << (num1 < num2 ? num1 : num2); }
};

int main() {
    Cal <int> obj;
    obj.acc; int ch;
    cout << "Enter choice of action: 1. Addition 2. Subtraction \n 3. Multiplication 4. Division 5. Module 6. Power\n 7. Max 8. Min \n Enter number: ";
    cin >> ch;
    switch (ch) {
        case 1: obj.add(); break;
        case 2: obj.sub(); break;
        case 3: obj.mul(); break;
        case 4: obj.div(); break;
        case 5: obj.mod(); break;
        case 6: obj.powl(); break;
        case 7: obj.max(); break;
        case 8: obj.min(); break;
        default: cout << "Error. " << endl; break;
    }
    return 0;
}
4. #include <iostream>
using namespace std;
template <class T> class Stk {
public:
    T s[10]; int top = -1;
    void push(T el) { top++; s[top] = el; cout << s[top] << endl; }
    void pop() { cout << "Deleting " << s[top] << endl; top--; }
};

int main() {
    Stk <int> obj;
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.pop();
    cout << "Stack: " << endl;
    for (int i = 0; i <= obj.top; i++) {
        cout << obj.s[i];
    }
    return 0;
}
