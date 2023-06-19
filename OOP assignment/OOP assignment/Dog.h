#include <string>
#include <iostream>
using namespace std;

class Dog
{
public:
	string Breed;
	string Color;
	int Height;
	int Weight;
	void Sit() {
		cout << "Your " + Color + " " + Breed + " sits down!\n";
	}
	void Shake() {
		cout << "Your " + Color + " " + Breed + " shakes your hand!\n";
	}
	void LayDown() {
		cout << "Your " + Color + " " + Breed + " lays down!\n";
	}
};