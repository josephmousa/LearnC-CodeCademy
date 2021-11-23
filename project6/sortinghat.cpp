//quiz that asks the user some questions and places them into one of the four Harry Potter school Houses based on their answer


#include <iostream>

int main() {
	
	//points
	int gryffindor = 0;
	int hufflepuff =0;
	int ravenclaw = 0;
	int slytherin = 0;

	//respones to questions
	int answer1, answer2, answer3, answer4;

	std::cout << "The Sorting Hat Quiz!\n";

	//Question 1
	std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";
	std::cout << "	1) The Good\n";
	std::cout << "	2) The Great\n";
	std::cout << "	3) The Wise\n";
	std::cout << "	4) The Bold\n";
	std::cin >> answer1;
	
	//assign points
	switch(answer1) {
		case 1:
			hufflepuff += 1;
			break;
		case 2:
			slytherin += 1;
			break;
		case 3:
			ravenclaw += 1;
			break;
		case 4:
			gryffindor += 1;
			break;
		default:
			std::cout << "Invalid input.\n";
	}
	
	//Question 2
	std::cout << "Dawn or Dusk?\n";
	std::cout << "	1) Dawn\n";
	std::cout << "	2) Dusk\n";
	std::cin >> answer2;

	//assing points
	if (answer2 == 1) {
		gryffindor += 1;
		ravenclaw += 1;
	}
	else if (answer2 == 2) {
		hufflepuff += 1;
		slytherin += 1;
	}
	else {
		std::cout << "Invalid input.\n";
	}

	//Question 3
	std::cout << "Q3) Which kind of instrument most pleases your ear?\n";
	std::cout << "	1) The violin\n";
	std::cout << "	2) The trumpet\n";
	std::cout << "	3) The piano\n";
	std::cout << "	4) The drum\n";
	std::cin >> answer3;
	
	//assing points
	if (answer3 == 1) {
		slytherin += 1;
	}
	else if (answer3 == 2) {
		hufflepuff += 1;
	}
	else if (answer3 == 3) {
		ravenclaw += 1;
	}
	else if (answer3 == 4) {
		gryffindor += 1;
	}
	else {
		std::cout << "Invalid input.\n";
	}
	
	//Question 4
	
	std::cout << "Q4) Which road tempts you the most?\n";
	std::cout << "	1) The wide, sunny grassy lane\n";
	std::cout << "	2) The narrow, dark, lantern-lit alley\n";
	std::cout << "	3) The twisting, leaf-strewn path through woods\n";
	std::cout << "	4) The cobbled street line (ancient buildings)\n";
	std::cin >> answer4;

	//assing points
	
	if (answer4 == 1) {
		hufflepuff += 1;
	}
	else if (answer4 == 2) {
		slytherin += 1;
	}
	else if (answer4 == 3) {
		ravenclaw += 1;
	}
	else if (answer4 == 4) {
		gryffindor += 1;
	}
	else {
		std::cout << "Invalid input.\n";
	}
	
	//Find hosue with most point
	
	int max = 0;
	std::string house;

	if (gryffindor > max) {
		max = gryffindor;
		house = "Gryffindor";
	}
	
	if (hufflepuff > max) {
		max = hufflepuff;
		house = "Hufflepuff";
	}
	if (ravenclaw > max) {
		max = ravenclaw;
		house = "Ravenclaw";
	}
	if (slytherin > max) {
		max = slytherin;
		house = "Slytherin";
	}

	//output
	std::cout << house << "!\n";

}
