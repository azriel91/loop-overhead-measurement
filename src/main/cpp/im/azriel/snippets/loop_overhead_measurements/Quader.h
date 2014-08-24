/*
 * Quader.h
 *
 *  Created on: 23/08/2014
 *      Author: azriel
 */

#ifndef __IM_AZRIEL_SNIPPETS_LOOP_OVERHEAD_MEASUREMENTS__QUADER_H_
#define __IM_AZRIEL_SNIPPETS_LOOP_OVERHEAD_MEASUREMENTS__QUADER_H_

namespace im {
namespace azriel {
namespace snippets {
namespace loop_overhead_measurements {

class Quader {
private:
	const int value;
public:
	Quader(const int value);
	virtual ~Quader();

	/**
	 * Returns the quad of the number that was passed to this class's constructor.
	 *
	 * @returns the quaded number
	 */
	const int quad() const;
};

} /* namespace loop_overhead_measurements */
} /* namespace snippets */
} /* namespace azriel */
} /* namespace im */

#endif /* __IM_AZRIEL_SNIPPETS_LOOP_OVERHEAD_MEASUREMENTS__QUADER_H_ */
