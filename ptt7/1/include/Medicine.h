#pragma once

struct coordinate {
	double x = 0;
	double y = 0;
};

void scalpel(coordinate a, coordinate b) {
	std::cout << "An incision was made between two points (" << a.x << ";" << a.y << ") and (" << b.x << ";" << b.y << ")" << std::endl;
}

void hemostat(coordinate a) {
	std::cout << "A clamp is made at the point (" << a.x << ";" << a.y << ")" << std::endl;
}

void tweezers(coordinate a) {
	std::cout << "The tweezers are at the point (" << a.x << ";" << a.y << ")" << std::endl;
}

void suture(coordinate a, coordinate b) {
	std::cout << "A seam is made between two points (" << a.x << ";" << a.y << ") and (" << b.x << ";" << b.y << ")" << std::endl;
}

bool compare(coordinate a, coordinate b, coordinate c, coordinate d) {
	if (a.x == c.x && a.y == c.y && b.x == d.x && b.y == d.y) return true;
	else return false;
}