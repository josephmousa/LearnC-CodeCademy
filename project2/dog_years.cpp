//program to calculate the age of a dog(2 years old+) in human years
#include <iostream>

int main() {
	
	int dog_age = 11;
	int early_years, later_years, human_years;
	
	//Firts 2 years of a dog's life count as 21 human years
	early_years = 21;
	//Each following year counts as 4 human years
	later_years = (dog_age - 2) * 4;
	human_years = early_years + later_years;

	std::cout << "My name is Polly! Ruff Ruff, I am " << human_years << " years old in human years.\n";

}
