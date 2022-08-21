#include"HeXX.hpp"
#include<iostream>
using namespace CyberSpace;

//*
int main() {
	u8<float> a = { 0.0f };
	a = a | 1.0f | 2.0f | 114.514f | 1234.0f;
	for (int i = 1; i <= a.size(); i++) {
		std::cout << a[i] << std::endl;
	}

	u8<size_t> b = { 1ull,3ull };
	auto c = a | 1.0f;

	std::cout << "c:" << std::endl;
	for (int i = 1; i <= c.size(); i++) {
		std::cout << c[i] << " | ";
	}
	std::cout << std::endl;

	u8<int> d(3, 58);
	
	d[2] = 0;
	std::cout << "d:" << std::endl;
	for (int i = 1; i <= d.size(); i++) {
		std::cout << d[i] << " | ";
	}
	std::cout << std::endl;

	std::cout << d << std::endl;

	u8<size_t> filler = { 1 };
	u8<uint32_t> keys(104);
	keys.powerCon(filler | 2ull | 6ull | 7ull | 11ull | 52ull | 57ull | 58ull | 65ull, 10);
	std::cout << keys << std::endl;

	u8<int> e = { 2,2,2,2,4,4,4,4 };
	std::cout << "e:" << e << std::endl;

	std::cout << "e++:" << e++ << std::endl;
	e--;
	std::cout << "++e:" << ++e << std::endl;
	e--;
	std::cout << "e--:" << e-- << std::endl;
	e++;
	std::cout << "--e:" << --e << std::endl;
	e++;

	std::cout << "e+1:" << e + 1 << std::endl;
	std::cout << "e-1:" << e - 1 << std::endl;
	std::cout << "e*2:" << e * 2 << std::endl;
	std::cout << "e/2:" << e / 2 << std::endl;
	std::cout << "e*e:" << e * e << std::endl;
	return CYBER_SUCCESS;
}
//*/
