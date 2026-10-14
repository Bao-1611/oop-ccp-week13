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
        CCCD = "000000000000";
        name = "Unknown";
        address = "Unknown";
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
};

class Student : public People {
private:
    string MSSV;
    int yearEntrance;
public:
    Student() : People() {
        MSSV = "N/A";
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
        cout << "CCCD: " << getCCCD() << endl;
        cout << "Name: " << getName() << endl;
        cout << "Address: " << getAddress() << endl;
        cout << "MSSV: " << getMSSV() << endl;
        cout << "Year Entrance: " << getYearEntrance() << endl;
        cout << "Credits: " << credits << endl;
        cout << "-----------------------" << endl;
    }
};

int main() {
    People p1;
    People p2("079123456789", "Tran Ngoc Quoc Thinh", "Ho Chi Minh");

    Student s1; 
    Student s2("079123456789", "Le Trung Hieu", "Thanh Hoa", "SV001", 2023);

    FIEStudent f1;
    FIEStudent f2("079987654321", "Le Minh Huy", "Phu Quoc", "FIE2023001", 2023, 120);

    cout << "== Thong tin doi tuong f1 (khoi tao mac dinh) ==" << endl;
    f1.displayInfo();

    cout << "== Thong tin doi tuong f2 (khoi tao co tham so) ==" << endl;
    f2.displayInfo();

    return 0;
}