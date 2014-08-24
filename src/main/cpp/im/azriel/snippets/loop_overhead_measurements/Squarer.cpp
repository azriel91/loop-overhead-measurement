/*
 * Squarer.cpp
 *
 *  Created on: 18/08/2014
 *      Author: azriel
 */

#include "im/azriel/snippets/loop_overhead_measurements/Squarer.h"

namespace im {
namespace azriel {
namespace snippets {
namespace loop_overhead_measurements {

Squarer::Squarer(const int value) : value(value) {
}

Squarer::~Squarer() {
}

const int Squarer::square() const {
	return this->value * this->value;
}

} /* namespace loop_overhead_measurements */
} /* namespace snippets */
} /* namespace azriel */
} /* namespace im */
