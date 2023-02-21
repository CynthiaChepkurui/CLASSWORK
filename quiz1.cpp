#include <iostream>
#include <string>

using namespace std;

class Car {
protected:
    string make;
    string model;
    int year;
public:
    Car(string _make, string _model, int _year) {
        make = _make;
        model = _model;
        year = _year;
    }

    void start() {
        cout << "Starting the " << make << " " << model << endl;
    }

    void stop() {
        cout << "Stopping the " << make << " " << model << endl;
    }
};

class ElectricCar : public Car {
protected:
    int batteryCapacity;
public:
    ElectricCar(string _make, string _model, int _year, int _batteryCapacity) : Car(_make, _model, _year) {
        batteryCapacity = _batteryCapacity;
    }

    void charge() {
        cout << "Charging the " << make << " " << model << " with " << batteryCapacity << " kWh battery" << endl;
    }
};

class GasolineCar : public Car {
protected:
    int fuelCapacity;
public:
    GasolineCar(string _make, string _model, int _year, int _fuelCapacity) : Car(_make, _model, _year) {
        fuelCapacity = _fuelCapacity;
    }

    void refuel() {
        cout << "Refueling the " << make << " " << model << " with " << fuelCapacity << " gallon tank" << endl;
    }
};

int main() {
    ElectricCar myElectricCar("Tesla", "Model S", 2022, 100);
    myElectricCar.start();
    myElectricCar.charge();
    myElectricCar.stop();

    GasolineCar myGasolineCar("Toyota", "Camry", 2021, 18);
    myGasolineCar.start();
    myGasolineCar.refuel();
    myGasolineCar.stop();

    return 0;
}
