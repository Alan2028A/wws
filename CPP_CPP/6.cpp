#include <string>
#include <iostream>

int main() {
	std::string n;

	std::cout << "Enter number: ";
	std::cin >> n;

	for (const auto& c : n)
		std::cout << c << '\n';
}
