#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay() {
        cout << "Processing payment..." << endl;
    }
};

class UPI : public Payment {
public:
    void pay() override {
        cout << "Payment made using UPI." << endl;
    }
};

class Card : public Payment {
public:
    void pay() override {
        cout << "Payment made using Debit/Credit Card." << endl;
    }
};

class Cash : public Payment {
public:
    void pay() override {
        cout << "Payment made using Cash." << endl;
    }
};

int main() {
    Payment *p;
    UPI u;
    Card c;
    Cash ca;

    int choice;

    do {
        cout << "\n--- Payment System ---" << endl;
        cout << "1. UPI Payment" << endl;
        cout << "2. Card Payment" << endl;
        cout << "3. Cash Payment" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                p = &u;
                p->pay();
                break;

            case 2:
                p = &c;
                p->pay();
                break;

            case 3:
                p = &ca;
                p->pay();
                break;

            case 4:
                cout << "Exiting Payment System." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    } while(choice != 4);

    return 0;
}
