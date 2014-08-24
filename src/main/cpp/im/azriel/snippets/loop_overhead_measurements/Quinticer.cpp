/*
 * Quinticer.cpp
 *
 *  Created on: 23/08/2014
 *      Author: azriel
 */

#include "im/azriel/snippets/loop_overhead_measurements/Quinticer.h"

namespace im {
namespace azriel {
namespace snippets {
namespace loop_overhead_measurements {

Quinticer::Quinticer(const int value) : value(value) {
}

Quinticer::~Quinticer() {
}

const int Quinticer::quintic() const {
	return this->value * this->value * this->value * this->value * this->value;
}

} /* namespace loop_overhead_measurements */
} /* namespace snippets */
} /* namespace azriel */
} /* namespace im */
