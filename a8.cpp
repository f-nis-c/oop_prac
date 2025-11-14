1.
    #include <iostream>
    using namespace std;
    class OpOver {
    public:
        string s = "Comp";
        string operator+(string st) {return s+=st;}
        void disp() { cout << "String: " << s << endl; }
    }s1; 
    int main() {
        s1.s=s1+"Sci";
        s1.disp(); 
        return 0;
    }
2.
    #include <iostream>
    #include <string>
    using namespace std;
    class ILogin {
    public:
        string name;
        string password;
        virtual void accept() {
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Password: ";
            cin >> password;
        }
    }i;
    class EmailLogin : public ILogin {
    public:
        void display(){
            cout << "Email Login Details:" << endl << "Name: " << name 
            << endl << "Password: " << password << endl; }
    }e;
    class MembershipLogin : public ILogin {
    public:
        void display(){
            cout << "Membership Login Details:" << endl << "Name: " << name 
            << endl << "Password: " << password << endl;
        }
    }m;
    int main() {
        e.accept();e.display();m.accept();m.display();
        return 0;
    }
