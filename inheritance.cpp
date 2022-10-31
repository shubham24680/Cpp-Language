#include <iostream>
#include <conio.h>
using namespace std;

class Vehicle{
public:
    Vehicle(){
        cout << "There are different type of vehicle based on size and wheels." << endl;
    }
};

class Fourwheeler: Vehicle{
public:
    Fourwheeler(){
        cout << "Under vehicle fourwheeler are highly produce in world." << endl;
    }
};

class Car: Fourwheeler{
public:
    Car(){
        cout << "Car have 4 wheels and most common vehicle under fourwheeler.";
    }
};

int main(int argc, char const *argv[]){
    Car swift;
    getch();
    return 0;
}
