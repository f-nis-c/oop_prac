1.
    #include <iostream>
    using namespace std;
    class Calc{
    public: int side, len, bred;
    int area (int s) { return s*s; }
    int area (int l, int b) { return l*b;}
    void accept (){
    cout << "Enter side, length and breadth: ";
    cin>>side >> len >> bred;
    }
    }s1;
    int main (){
    s1.accept();
    int areas = s1. area (s1.side);
    int arear = s1. area (s1.len, s1. bred);
    cout<<"Square area: " << areas << endl << "Rect area: "<< arear;
    return 0;
    }
2.
    #include <iostream>
    using namespace std;
    class Calc{
    public: int iarr[10]; float farr[5];
    int sum(int arr[10]) { int sum=0; 
        for(int i=0;i<10;i++){sum+=arr[i];} 
        return sum;}
    float sum(float arr[5]) { float sum=0; 
        for(int i=0;i<5;i++){sum+=arr[i];} 
        return sum;}
    void accept (){
        cout<<"Enter int array: "<<endl;
        for(int i=0;i<10;i++){cin>>iarr[i];}
        cout<<"Enter float array: "<<endl;
        for(int i=0;i<5;i++){cin>>farr[i];}
    }
    }s1;
    int main (){
    s1.accept();
    int sum1 = s1.sum(s1.iarr);
    float sum2 = s1.sum(s1.farr);
    cout<<"Sum of int arr: " << sum1 << endl << "Sum of float arr: "<< sum2;
    return 0;
    }
3.
    #include <iostream>
    using namespace std;
    class OpOver{
        public: int n;
        void operator -(){n=-n;}
        void acc(){cout<<"Enter n:"; cin>>n;}
        void disp(){cout<<"N: "<<n;}
    }s1;
    int main (){
    s1.acc();
    -s1;
    s1.disp();
    return 0;
    }
4.
    #include <iostream>
    using namespace std;
    class OpOver{
        public: int n;
        void operator ++(){n=n+1;}
        void acc(){cout<<"Enter n:"; cin>>n;}
        void disp(){cout<<"N: "<<n;}
    }s1;
    int main (){
    s1.acc();
    ++s1;
    s1.disp();
    return 0;
    }
