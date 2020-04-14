#include <iostream>

using namespace std;

class Car {
    public:
        int a;
    private:
        int b;
};

int main() {
    Car car;

    car.a = 23;
    cout << car.a;
    return 0;
}