#include "Solution.h"
#include <cstdint>

void input(std::list<int>& seq) {
	std::cout << "Write seq size" << std::endl;
	size_t size = 0;
	std::cin >> size;
	size *= 2;

	std::cout << "Write " << size << " numbers" << std::endl;
	for(size_t i = 0; i < size; ++i) {
		int el = 0;
		std::cin >> el;
		seq.push_back(el);
	}
}

int get_min(const std::list<int>& seq) {
	auto start = seq.begin();
	auto end = --seq.end();

	int min = INT32_MAX;
	while(start != end) {
		if(*start + *end < min)
			min = *start + *end;

		++start;
		--end;
	}	

	return min;
}
