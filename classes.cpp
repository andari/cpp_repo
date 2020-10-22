// C++ program to implement 
// Multilevel Inheritance 
#include <iostream> 
using namespace std; 

// base class 
class Vehicle 
{ 
public: 
	Vehicle() 
	{ 
	cout << "This is a Vehicle" << endl; 
	} 
}; 
class fourWheeler: public Vehicle 
{ public: 
	fourWheeler() 
	{ 
	cout<<"Objects with 4 wheels are vehicles"<<endl; 
	} 
}; 
// sub class derived from two base classes 
class Car: public fourWheeler{ 
public: 
	Car() 
	{ 
	cout<<"Car has 4 Wheels"<<endl; 
	} 
}; 

class veh: public Car{
    public:
    veh()
    {
        cout << "Veh has 6 wheels, Ole on the wheel" << endl;
    }
};

// main function 
int main() 
{ 
	//creating object of sub class will 
	//invoke the constructor of base classes 
	veh obj;
    //obj; 

	return 0; 
} 
