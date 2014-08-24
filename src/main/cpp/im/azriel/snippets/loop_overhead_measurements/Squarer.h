/*
 * Squarer.h
 *
 *  Created on: 18/08/2014
 *      Author: azriel
 */

#ifndef __IM_AZRIEL_SNIPPETS_LOOP_OVERHEAD_MEASUREMENTS__SQUARER_H_
#define __IM_AZRIEL_SNIPPETS_LOOP_OVERHEAD_MEASUREMENTS__SQUARER_H_

namespace im {
namespace azriel {
namespace snippets {
namespace loop_overhead_measurements {

class Squarer {
private:
	const int value;
public:
	Squarer(const int value);
	virtual ~Squarer();

	/**
	 * Returns the square of the number that was passed to this class's constructor.
	 *
	 * @returns the squared number
	 */
	const int square() const;
};

} /* namespace loop_overhead_measurements */
} /* namespace snippets */
} /* namespace azriel */
} /* namespace im */

#endif /* __IM_AZRIEL_SNIPPETS_LOOP_OVERHEAD_MEASUREMENTS__SQUARER_H_ */
