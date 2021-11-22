//programt to convert pesos,reals,soles to USD by asking user how much of each they have
//using exchange rate at 11/22/2021 18:19 PM


#include <iostream>

int main() {
	
	double pesos, reals, soles, dollars;
	
	std::cout << "Enter the number of Colombian Pesos: ";
	std::cin >> pesos;
	std::cout << "Enter the number of Brazilian Reals: ";
	std::cin >> reals;
	std::cout << "Enter the number of Peruvian Soles: ";
	std::cin >> soles;

	//Current conversion rates
	//pesos --> usd = 0.048
	//reals --> usd = 0.180
	//soles --> usd = 0.250
	dollars = (0.048 * pesos) + (0.180 * reals) + (0.250 * soles);
	
	std::cout << "US Dollars = $" << dollars << "\n";

}
