#include <iostream>
#include <string>
#include "Dog.h"
using namespace std;

void main()
{
	Dog Hound;
	Hound.Breed = "Hound";
	Hound.Color = "Brown";
	Hound.Height = 24;
	Hound.Weight = 60;
	Hound.LayDown();
	Hound.Shake();
	Hound.Sit();
}