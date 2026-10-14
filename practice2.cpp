#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    string cccd;
    string sdt;
    string address;
public:
    Employee() {
        cccd = "";
        sdt = "";
        address = "";
    }

    Employee(string c, string s, string a) {
        cccd = c;
        sdt = s;
        address = a;
    }

    string getCCCD() const { return cccd; }
    string getSDT() const { return sdt; }
    string getAddress() const { return address; }
    void setCCCD(string c) { cccd = c; }
    void setSDT(string s) { sdt = s; }
    void setAddress(string a) { address = a; }

    void displayInfo() const {
        cout << "CCCD: " << cccd << endl;
        cout << "SDT: " << sdt << endl;
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

    double tinhLuong() const {
        return soGioLamViec * donGia;
    }

    void displayInfo() const {
        Employee::displayInfo();
        cout << "So gio lam viec: " << soGioLamViec << endl;
        cout << "Don gia: " << (long long)donGia << endl;
        cout << "Luong: " << (long long)tinhLuong() << endl;
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

    double tinhLuong() const {
        return luongCoBan + phuCap + (luongCoBan * heSoThuong);
    }

    void displayInfo() const {
        Employee::displayInfo();
        cout << "Luong co ban: " << (long long)luongCoBan << endl;
        cout << "Phu cap: " << (long long)phuCap << endl;
        cout << "He so thuong: " << heSoThuong << endl;
        cout << "Luong: " << (long long)tinhLuong() << endl;
    }
};

int main() {
    Employee e1("079123456789", "Tran Ngoc Quoc Thinh", "Ho Chi Minh");
    
    HourlyEmployee h1("079876543210", "Le Trung Hieu", "Thanh Hoa", 160, 50000);
    
    MonthlyEmployee m1("079987654321", "Le Minh Huy", "Phu Quoc", 15000000, 2000000, 1.2);

    cout << "--- Thong tin Employee ---" << endl;
    e1.displayInfo();
    cout << endl;

    cout << "--- Thong tin HourlyEmployee ---" << endl;
    h1.displayInfo();
    cout << endl;

    cout << "--- Thong tin MonthlyEmployee ---" << endl;
    m1.displayInfo();

    return 0;
}