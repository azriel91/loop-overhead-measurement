/*
 * Quader.cpp
 *
 *  Created on: 23/08/2014
 *      Author: azriel
 */

#include "im/azriel/snippets/loop_overhead_measurements/Quader.h"

namespace im {
namespace azriel {
namespace snippets {
namespace loop_overhead_measurements {

Quader::Quader(const int value) : value(value) {
}

Quader::~Quader() {
}

const int Quader::quad() const {
	return this->value * this->value * this->value * this->value;
}

} /* namespace loop_overhead_measurements */
} /* namespace snippets */
} /* namespace azriel */
} /* namespace im */
