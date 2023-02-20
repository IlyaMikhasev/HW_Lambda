#include <iostream>
#include <vector>
#include <algorithm> 
int main() {
	setlocale(LC_ALL, "Russian");
	std::vector<int> vec{ 2,-5,6,-1,11 - 0,4,-3,9,-8 };
	std::for_each(vec.begin(), vec.end(), [](int a) {
		if (a % 2 == 0) {
			std::cout << a<<'\n';
		}
		});
	return 0;
}