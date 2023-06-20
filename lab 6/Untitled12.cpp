#include <iostream>
using namespace std;

class tollBooth {
private:
    unsigned int carTotal;
    double cashTotal;

public:
    tollBooth();
    ~tollBooth();

    void payingCar();
    void nopayCar();
    void display() const;
};

tollBooth::tollBooth() {
    this->carTotal = 0;
    this->cashTotal = 0;
}

tollBooth::~tollBooth() {}

void tollBooth::payingCar() {
    carTotal += 1;
    cashTotal += 0.5;
}

void tollBooth::nopayCar() {
    carTotal += 1;
}

void tollBooth::display() const {
    cout << "Number of cars passed by: " << carTotal << "\nCash collected: $" << cashTotal << endl;
}

int main() {
    tollBooth mainBridge;

    mainBridge.payingCar();
    mainBridge.payingCar();
    mainBridge.payingCar();
    mainBridge.nopayCar();
    mainBridge.nopayCar();

    mainBridge.display();

    return 0;
}
