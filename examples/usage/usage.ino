// Example usage for OpalLibraryHelper library by Sam Rosenstein.

#include "OpalLibraryHelper.h"

// Initialize objects from the lib
OpalLibraryHelper opalLibraryHelper;

void setup() {
    // Call functions on initialized library objects that require hardware
    opalLibraryHelper.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    opalLibraryHelper.process();
}
