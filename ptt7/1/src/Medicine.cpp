#include <iostream>
#include "Medicine.h"

int main() {
	coordinate pointOne, pointTwo, pointThree, pointFour;
	std::cout << "Enter the coordinate of the first cut point: ";
	std::cin >> pointOne.x >> pointOne.y;
	std::cout << "Enter the coordinate of the second cut point: ";
	std::cin >> pointTwo.x >> pointTwo.y;
	scalpel(pointOne, pointTwo);
	std::cout << "Enter the point where you want to make the clamp: ";
	std::cin >> pointThree.x >> pointThree.y;
	hemostat(pointThree);
	std::cout << "Enter the point where you want to install the tweezers: ";
	std::cin >> pointFour.x >> pointFour.y;
	tweezers(pointFour);
	while (compare(pointOne, pointTwo, pointThree, pointFour) != true) {
		std::cout << "Enter the coordinate of the first seam point: ";
		std::cin >> pointThree.x >> pointThree.y;
		std::cout << "Enter the coordinate of the second seam point: ";
		std::cin >> pointFour.x >> pointFour.y;
		suture(pointThree, pointFour);
	}
	std::cout << "The operation is completed!";
}