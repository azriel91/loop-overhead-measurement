/*
 * Measurer.h
 *
 *  Created on: 18/08/2014
 *      Author: azriel
 */

#ifndef __IM_AZRIEL_SNIPPETS_LOOP_OVERHEAD_MEASUREMENTS__MEASURER_H_
#define __IM_AZRIEL_SNIPPETS_LOOP_OVERHEAD_MEASUREMENTS__MEASURER_H_

#include <time.h>
#include "im/azriel/snippets/loop_overhead_measurements/Squarer.h"
#include "im/azriel/snippets/loop_overhead_measurements/Cuber.h"
#include "im/azriel/snippets/loop_overhead_measurements/Quader.h"
#include "im/azriel/snippets/loop_overhead_measurements/Quinticer.h"

namespace im {
namespace azriel {
namespace snippets {
namespace loop_overhead_measurements {

class Measurer {
public:
	Measurer();
	virtual ~Measurer();

	/**
	 * Returns the number of time units
	 *
	 * @param unitsOfWork the number of units of work to do
	 * @param granularity the number of loops to break the work into
	 */
	const double measure(const int unitsOfWork, const bool singleLoop) const;

private:
	const int sumSingleLoop(const int unitsOfWork) const;
	const int sumMultipleLoops(const int unitsOfWork) const;
};

} /* namespace loop_overhead_measurements */
} /* namespace snippets */
} /* namespace azriel */
} /* namespace im */

#endif /* __IM_AZRIEL_SNIPPETS_LOOP_OVERHEAD_MEASUREMENTS__MEASURER_H_ */
