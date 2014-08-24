/*
 * Quinticer.h
 *
 *  Created on: 23/08/2014
 *      Author: azriel
 */

#ifndef __IM_AZRIEL_SNIPPETS_LOOP_OVERHEAD_MEASUREMENTS__QUINTINCER_H_
#define __IM_AZRIEL_SNIPPETS_LOOP_OVERHEAD_MEASUREMENTS__QUINTINCER_H_

namespace im {
namespace azriel {
namespace snippets {
namespace loop_overhead_measurements {

class Quinticer {
private:
	const int value;
public:
	Quinticer(const int value);
	virtual ~Quinticer();

	/**
	 * Returns the quintic of the number that was passed to this class's constructor.
	 *
	 * @returns the quaded number
	 */
	const int quintic() const;
};

} /* namespace loop_overhead_measurements */
} /* namespace snippets */
} /* namespace azriel */
} /* namespace im */

#endif /* __IM_AZRIEL_SNIPPETS_LOOP_OVERHEAD_MEASUREMENTS__QUINTINCER_H_ */
