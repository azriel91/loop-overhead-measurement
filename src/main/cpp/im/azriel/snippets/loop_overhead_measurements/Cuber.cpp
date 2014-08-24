/*
 * Cuber.cpp
 *
 *  Created on: 23/08/2014
 *      Author: azriel
 */

#include "im/azriel/snippets/loop_overhead_measurements/Cuber.h"

namespace im {
namespace azriel {
namespace snippets {
namespace loop_overhead_measurements {

Cuber::Cuber(const int value) : value(value) {
}

Cuber::~Cuber() {
}

const int Cuber::cube() const {
	return this->value * this->value * this->value;
}

} /* namespace loop_overhead_measurements */
} /* namespace snippets */
} /* namespace azriel */
} /* namespace im */
