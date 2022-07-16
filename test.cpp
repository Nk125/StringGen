#include <iostream>
#include "stringctgen.hpp"

int main() {
  constexpr int size = 10;
	std::string myStr = ct::generate::makeStr<size>();
	std::ios_base::fmtflags f(std::cout.flags());

	std::cout << std::setw(2) << std::setfill('0') << std::hex;
	std::copy(myStr.begin(), myStr.end(), std::ostream_iterator<int>(std::cout, ""));

	std::cout.flags(f);
	std::cout << "\n" << myStr.size() << "\n";
}
