/*
 * Cuber.h
 *
 *  Created on: 23/08/2014
 *      Author: azriel
 */

#ifndef __IM_AZRIEL_SNIPPETS_LOOP_OVERHEAD_MEASUREMENTS__CUBER_H_
#define __IM_AZRIEL_SNIPPETS_LOOP_OVERHEAD_MEASUREMENTS__CUBER_H_

namespace im {
namespace azriel {
namespace snippets {
namespace loop_overhead_measurements {

class Cuber {
private:
	const int value;
public:
	Cuber(const int value);
	virtual ~Cuber();

	/**
	 * Returns the cube of the number that was passed to this class's constructor.
	 *
	 * @returns the cubed number
	 */
	const int cube() const;
};

} /* namespace loop_overhead_measurements */
} /* namespace snippets */
} /* namespace azriel */
} /* namespace im */

#endif /* __IM_AZRIEL_SNIPPETS_LOOP_OVERHEAD_MEASUREMENTS__CUBER_H_ */
