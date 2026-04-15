#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string vehicleNumber;
    float rentalPrice;

    Vehicle(string vNum, float rPrice){ 
        vehicleNumber =vNum;
         rentalPrice=rPrice; 
        cout << "Vehicle Number: " << vehicleNumber << endl;
        cout << "Rental Price: " << rentalPrice << endl;
        cout<<"constructor called for Vehicle"<< endl;
    }
};

class Car : public Vehicle {
public:
    int numberOfSeats;

    Car(string vNum, double rPrice, int seats): Vehicle(vNum, rPrice){ 
        numberOfSeats=seats;
        cout << "Number of Seats: " << numberOfSeats << endl;
        cout<<"constructor called for Car"<< endl;
    }
};

class Truck : public Vehicle {
public:
    float loadCapacity;

    Truck(string vNum, float rPrice, float capacity): Vehicle(vNum, rPrice){
        loadCapacity = capacity;
        cout << "Load Capacity: " << loadCapacity << " tons" << endl;
        cout<<"constructor called for Truck"<< endl;
    }
};

class RentalCar : public Car {
public:
    string carType;

    RentalCar(string vNum, float rPrice, int seats, string type): Car(vNum, rPrice, seats){
         carType=type;
        cout << "Car Type: " << carType << endl;
        cout<<"constructor called for Rentalcar"<< endl;
    }
};

int main() {
    cout << "---- Rental Car Details ----" << endl;
    RentalCar rc1("HR26AB0001", 2500.50, 5, "SUV");
    RentalCar rc2("HR26CD0002", 4000.50, 7, "SUV");

    cout << "\n---- Truck Details ----" << endl;
    Truck t1("HR55XY0003", 5000.75, 12.5);
    Truck t2("HR55XY0004", 8000.75, 25.5);

    return 0;
}
