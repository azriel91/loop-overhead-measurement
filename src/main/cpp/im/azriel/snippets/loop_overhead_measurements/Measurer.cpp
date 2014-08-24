/*
 * Measurer.cpp
 *
 *  Created on: 18/08/2014
 *      Author: azriel
 */

#include "im/azriel/snippets/loop_overhead_measurements/Measurer.h"

namespace im {
namespace azriel {
namespace snippets {
namespace loop_overhead_measurements {

Measurer::Measurer() {
}

Measurer::~Measurer() {
}

const double Measurer::measure(const int unitsOfWork, const bool singleLoop) const {
	timespec ts, te;
	clock_gettime(CLOCK_MONOTONIC, &ts);

	if (singleLoop) {
		sumSingleLoop(unitsOfWork);
	} else {
		sumMultipleLoops(unitsOfWork);
	}

	clock_gettime(CLOCK_MONOTONIC, &te);

	const double secondsDiff = (double) (te.tv_sec - ts.tv_sec);
	const double nanoSecondsDiff = (double) (te.tv_nsec - ts.tv_nsec) / 1000000000.0;

	return secondsDiff + nanoSecondsDiff;
}

const int Measurer::sumSingleLoop(const int unitsOfWork) const {
	int sum = 0;
	for (int i = 0; i < unitsOfWork; ++i) {
		const Squarer* const squarer = new Squarer(i);
		const Cuber* const cuber = new Cuber(i);
		const Quader* const quader = new Quader(i);
		const Quinticer* const quinticer = new Quinticer(i);

		sum += squarer->square();
		sum += cuber->cube();
		sum += quader->quad();
		sum += quinticer->quintic();

		delete quinticer;
		delete quader;
		delete cuber;
		delete squarer;
	}
	return sum;
}

const int Measurer::sumMultipleLoops(const int unitsOfWork) const {
	int sum = 0;
	for (int i = 0; i < unitsOfWork; ++i) {
		const Squarer* const squarer = new Squarer(i);
		sum += squarer->square();
		delete squarer;
	}
	for (int i = 0; i < unitsOfWork; ++i) {
		const Cuber* const cuber = new Cuber(i);
		sum += cuber->cube();
		delete cuber;
	}
	for (int i = 0; i < unitsOfWork; ++i) {
		const Quader* const quader = new Quader(i);
		sum += quader->quad();
		delete quader;
	}
	for (int i = 0; i < unitsOfWork; ++i) {
		const Quinticer* const quinticer = new Quinticer(i);
		sum += quinticer->quintic();
		delete quinticer;
	}
	return sum;
}

} /* namespace loop_overhead_measurements */
} /* namespace snippets */
} /* namespace azriel */
} /* namespace im */
