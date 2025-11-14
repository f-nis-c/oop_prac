#include <iostream>
    #include <fstream>
    using namespace std;
    int main() {
        ofstream First("First.txt");
        if (First.is_open()) {
            First << "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua."
            <<endl<<"Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.\n";
            First << "123 24 1 4 5 6.\n";
            First << "file file file. End of file!\n";
            First.close();
            cout << "Sample File Created.\n";
        }
        cout << "Copying File Contents\n";
        ifstream inputA("First.txt", ios::in);
        ofstream outputA("Second.txt", ios::out);
        if (inputA.is_open() && outputA.is_open()) {
            string line;
            while (getline(inputA, line)) {
                outputA << line << "\n";
            }
            cout << "Contents copied.\n";
        } else {
            cout << "Could not open file.\n";
        }
        inputA.close();
        outputA.close();
        cout << "Counting Digits and Spaces:\n";
        ifstream inputB("First.txt");
        int dc = 0, sc = 0; char ch;
        if (inputB.is_open()) {
            while (inputB.get(ch)) {
                if (isdigit(ch)) {dc++;} 
                else if (isspace(ch)) {sc++;}
            }
            cout << "Total Digits: " << dc << "\n";
            cout << "Total Spaces: " << sc << "\n";
        } 
        else{
            cout << "Could not open First.txt.\n";
        }
        cout << "Counting Words:\n";
        int wc = 0;
        string word;
        if (inputB.is_open()) {
            inputB.clear(); //this sets eof clear
            inputB.seekg(0, ios::beg); //sets to beginning of file
            while (inputB >> word) {wc++;}
            cout << "Total Words: " << wc << "\n";
        } 
        else {cout << "Could not open First.txt.\n";}
        cout << "Counting Specific Word Occurrence\n";
        string tw;
        cout << "Enter the word (case-sensitive): ";
        cin >> tw;
        int wc1 = 0;
        string curword;
        if (inputB.is_open()) {
            inputB.clear(); 
            inputB.seekg(0, ios::beg); 
            while (inputB >> curword) {
                if (curword == tw) {wc1++;}
            }
            cout << tw << " appears " << wc1 << " times.\n";
        } 
        else {cout << "Could not open First.txt.\n";}
        inputB.close();
        return 0;
    }
