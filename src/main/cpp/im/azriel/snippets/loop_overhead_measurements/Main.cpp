#include <cstdio>
#include "im/azriel/snippets/loop_overhead_measurements/Measurer.h"

using namespace im::azriel::snippets::loop_overhead_measurements;

int main(int argc, char const *argv[]) {
	const Measurer* const measurer = new Measurer();

	const double singleTime = measurer->measure(200000000, true);
	printf("Single Loop: %lf seconds\n", singleTime);

	const double multiTime = measurer->measure(200000000, false);
	printf("Multiple Loops: %lf seconds\n", multiTime);

	return 0;
}