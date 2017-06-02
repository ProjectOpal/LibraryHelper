/* OpalLibraryHelper library by Sam Rosenstein
 */

#include "OpalLibraryHelper.h"

/**
 * Constructor.
 */
OpalLibraryHelper::OpalLibraryHelper()
{
  // be sure not to call anything that requires hardware be initialized here, put those in begin()
}

/**
 * Example method.
 */
void OpalLibraryHelper::begin()
{
    // initialize hardware
    Serial.println("called begin");
}

/**
 * Example method.
 */
void OpalLibraryHelper::process()
{
    // do something useful
    Serial.println("called process");
    doit();
}

/**
* Example private method
*/
void OpalLibraryHelper::doit()
{
    Serial.println("called doit");
}
