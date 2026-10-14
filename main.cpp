#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string CCCD;
    string SDT;
    string address;
public:
    Employee() {
        CCCD = "";
        SDT = "";
        address = "";
    }

    Employee(string c, string s, string a) {
        CCCD = c;
        SDT = s;
        address = a;
    }

    string getCCCD() const { return CCCD; }
    string getSDT() const { return SDT; }
    string getAddress() const { return address; }

    void setCCCD(string c) { CCCD = c; }
    void setSDT(string s) { SDT = s; }
    void setAddress(string a) { address = a; }

    void displayInfo() const {
        cout << "CCCD: " << CCCD << endl;
        cout << "SDT: " << SDT << endl;
        cout << "Address: " << address << endl;
    }
};

class HourlyEmployee : public Employee {
private:
    int soGioLamViec;
    double donGia;
public:
    HourlyEmployee() : Employee() {
        soGioLamViec = 0;
        donGia = 0.0;
    }

    HourlyEmployee(string c, string s, string a, int soGio, double dg) 
        : Employee(c, s, a) {
        soGioLamViec = soGio;
        donGia = dg;
    }

    int getSoGioLamViec() const { return soGioLamViec; }
    double getDonGia() const { return donGia; }

    void setSoGioLamViec(int soGio) { soGioLamViec = soGio; }
    void setDonGia(double dg) { donGia = dg; }

    void displayInfo() const {
        Employee::displayInfo();
        cout << "So gio lam viec: " << soGioLamViec << endl;
        cout << "Don gia: " << donGia << endl;
    }
};

class MonthlyEmployee : public Employee {
private:
    double luongCoBan;
    double phuCap;
    double heSoThuong;
public:
    MonthlyEmployee() : Employee() {
        luongCoBan = 0.0;
        phuCap = 0.0;
        heSoThuong = 0.0;
    }

    MonthlyEmployee(string c, string s, string a, double lcb, double pc, double hs) 
        : Employee(c, s, a) {
        luongCoBan = lcb;
        phuCap = pc;
        heSoThuong = hs;
    }

    double getLuongCoBan() const { return luongCoBan; }
    double getPhuCap() const { return phuCap; }
    double getHeSoThuong() const { return heSoThuong; }

    void setLuongCoBan(double lcb) { luongCoBan = lcb; }
    void setPhuCap(double pc) { phuCap = pc; }
    void setHeSoThuong(double hs) { heSoThuong = hs; }

    void displayInfo() const {
        Employee::displayInfo();
        cout << "Luong co ban: " << (long long)luongCoBan << endl;
        cout << "Phu cap: " << (long long)phuCap << endl;
        cout << "He so thuong: " << heSoThuong << endl;
    }
};

int main() {
    Employee e1;
    cout << "--- Employee e1 ---" << endl;
    e1.displayInfo();
    cout << endl;

    HourlyEmployee h1("079123456789", "0901002003", "Ha Noi", 160, 50000);
    cout << "--- HourlyEmployee h1 ---" << endl;
    h1.displayInfo();
    cout << endl;

    MonthlyEmployee m1("079987654321", "0903004005", "Da Nang", 15000000, 2000000, 1.2);
    cout << "--- MonthlyEmployee m1 ---" << endl;
    m1.displayInfo();

    return 0;
}