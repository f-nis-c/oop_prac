//1. Multilevel Inheritance
#include <iostream>
using namespace std;
class Grandparent {
public:
   string name = "Venkat";
    void showgp(){cout << "Grandparent:"<<name<<endl;}
};
class Parent : public Grandparent {
public:
    string name = "Nishant";
    void showp(){showgp(); cout << "Parent: " << name << endl;}
};
class Child : public Parent {
public:
    string name = "Falak";
    void showc(){showp(); cout << "Child: " << name << endl;}
};
int main() {
    Child c;
    c.showc();
    return 0;
}

//2. Multiple Inheritance
#include <iostream>
using namespace std;
class Num1{public: int n1=3;};
class Num2{public: int n2=4;};
class Sum : public Num1, public Num2 {
    public: int sum=n1+n2;
    void disp(){cout<<"Sum: "<<sum<<endl;}
};
int main() {
    Sum s1; s1.disp();
    return 0;
}

//3. Hierarchical Inheritance
#include <iostream>
using namespace std;
class Num1{public: int s=3,l=4,b=5;};
class AreaS:public Num1{ 
    public: int area=s*s;
    void disp(){cout<<"Area: "<<area<<endl;}
};
class AreaR:public Num1{ 
    public: int area=l*b;
    void disp(){cout<<"Area: "<<area<<endl;}
};
int main() {
    AreaS a1; AreaR a2;
    a1.disp(); a2.disp();
    return 0;
}

//4. Hybrid Inheritance
#include <iostream>
using namespace std;
class Num1{public: int s=3,l=4,b=5;};
class AreaS:public Num1{ 
    public: int area1=s*s;
    void disp(){cout<<"Area: "<<area1<<endl;}
};
class AreaR:public Num1{ 
    public: int area2=l*b;
    void disp(){cout<<"Area: "<<area2<<endl;}
};
class SumA:public AreaS, public AreaR{
    public: int sum=area1+area2;
    void disp(){cout<<"Sum of areas: "<<sum<<endl;}
};
int main() {
    AreaS a1; AreaR a2; SumA s1;
    a1.disp(); a2.disp(); s1.disp();
    return 0;
}

//5. Virtual Base Class
#include <iostream>
using namespace std;
class Num1{public: int s=3,l=4,b=5;};
class AreaS:public virtual Num1{ 
    public: int area1=s*s;
    void disp(){cout<<"Area: "<<area1<<endl;}
};
class AreaR:public virtual Num1{ 
    public: int area2=l*b;
    void disp(){cout<<"Area: "<<area2<<endl;}
};
class SumA:public AreaS, public AreaR{
    public: int sum1=area1+area2, sum2=s+l+b;
    void disp(){
        cout<<"Sum of areas: "<<sum1<<endl;
        cout<<"Sum of dimensions: "<<sum2<<endl;}
};
int main() {
    AreaS a1; AreaR a2; SumA s1;
    a1.disp(); a2.disp(); s1.disp();
    return 0;
}
