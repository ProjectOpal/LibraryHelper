#pragma once

/* OpalLibraryHelper library by Sam Rosenstein
 */

// This will load the definition for common Particle variable types
#include "Particle.h"

namespace core {
  // This is your main class that users will import into their application
  class OpalModule : public Timer
  {
  public:
    /**
     * Constructor
     */
    OpalModule(int period, bool one_shot) :
                      Timer(period, nullptr, one_shot) {
    };

    void Start() {
      this->start();
    };

    virtual void Run() = 0;

  private:
    void timeout() {
      this->Run();
    };
    // Timer timer;
  };
} // namespace core
