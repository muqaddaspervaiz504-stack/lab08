#include <iostream>
using namespace std;

class Payment {
public:
    virtual double calculateFee() = 0;  
};

class BankTransfer : public Payment {
private:
    double amount;

public:
    BankTransfer(double a) {
        amount = a;
    }

    double calculateFee() override {
        return amount * 0.02;  
    }
};

class DigitalWallet : public Payment {
private:
    double amount;

public:
    DigitalWallet(double a) {
        amount = a;
    }

    double calculateFee() override {
        return amount * 0.01;  
    }
};

int main() {
    BankTransfer bank(10000);
    DigitalWallet wallet(10000);

    cout << "Bank Transfer Fee: " << bank.calculateFee() << endl;
    cout << "Digital Wallet Fee: " << wallet.calculateFee() << endl;

    return 0;
}
