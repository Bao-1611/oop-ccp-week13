#include <iostream>
#include <string>

using namespace std;

class People {
private:
    string CCCD;
    string name;
    string address;
public:
    People() {
        CCCD = "";
        name = "";
        address = "";
    }

    People(string c, string n, string a) {
        CCCD = c;
        name = n;
        address = a;
    }

    string getCCCD() const { return CCCD; }
    string getName() const { return name; }
    string getAddress() const { return address; }
    void setCCCD(string c) { CCCD = c; }
    void setName(string n) { name = n; }
    void setAddress(string a) { address = a; }

    void displayInfo() const {
        cout << "CCCD: " << CCCD << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};

class Student : public People {
private:
    string MSSV;
    int yearEntrance;
public:
    Student() : People() {
        MSSV = "";
        yearEntrance = 0;
    }

    Student(string c, string n, string a, string m, int y) 
        : People(c, n, a) {
        MSSV = m;
        yearEntrance = y;
    }

    string getMSSV() const { return MSSV; }
    int getYearEntrance() const { return yearEntrance; }
    void setMSSV(string m) { MSSV = m; }
    void setYearEntrance(int y) { yearEntrance = y; }

    void displayInfo() const {
        People::displayInfo(); 
        cout << "MSSV: " << MSSV << endl;
        cout << "Year Entrance: " << yearEntrance << endl;
    }
};

class FIEStudent : public Student {
private:
    int credits;
public:
    FIEStudent() : Student() {
        credits = 0;
    }

    FIEStudent(string c, string n, string a, string m, int y, int cr) 
        : Student(c, n, a, m, y) {
        credits = cr;
    }

    int getCredits() const { return credits; }
    void setCredits(int cr) { credits = cr; }

    void displayInfo() const {
        Student::displayInfo();
        cout << "Credits: " << credits << endl;
    }
};

int main() {
    People p1;
    cout << "--- People p1 (mặc định) ---" << endl;
    p1.displayInfo();
    cout << endl;

    People p2("079123456789", "Nguyen Van A", "Ho Chi Minh");
    cout << "--- People p2 (có tham số) ---" << endl;
    p2.displayInfo();
    cout << endl;

    Student s1("079123456789", "Tran Thi B", "Ha Noi", "SV001", 2023);
    cout << "--- Student s1 ---" << endl;
    s1.displayInfo();
    cout << endl;

    FIEStudent f1("079987654321", "Le Minh C", "Da Nang", "FIE2023001", 2023, 120);
    cout << "--- FIEStudent f1 ---" << endl;
    f1.displayInfo();
    cout << endl;

    return 0;
}