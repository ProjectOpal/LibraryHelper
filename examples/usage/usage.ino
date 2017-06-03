// Example usage for OpalLibraryHelper library by Sam Rosenstein.
// This is to mostly make sure that the main library header actually
// compiles.

#include "src/OpalLibraryHelper.h"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
using namespace core;

class SomeModule : public OpalModule {
 public:
  SomeModule(int number) : OpalModule(number*100, false) {
    this->number = number;
  };

  void Run() {
    // Particle.variable("testMessage", "Hello World!");
    WITH_LOCK(Serial) {
      Serial.print("Thread"); Serial.println(this->number);
    }
  }

 private:
  int number;
};

void PutIntoDFU() {
  System.dfu();
}

Timer putIntoDFUTimer(10000, PutIntoDFU, true);

SomeModule somemodule1(1);
SomeModule somemodule2(2);
SomeModule somemodule3(3);
SomeModule somemodule4(4);
SomeModule somemodule5(5);
SomeModule somemodule6(6);
SomeModule somemodule7(7);
SomeModule somemodule8(8);
SomeModule somemodule9(9);
SomeModule somemodule10(10);
SomeModule somemodule11(11);

void setup()
{
  somemodule1.start();
  somemodule2.start();
  somemodule3.start();
  somemodule4.start();
  somemodule5.start();
  somemodule6.start();
  somemodule7.start();
  somemodule8.start();
  somemodule9.start();
  somemodule10.start();
  somemodule11.start();
  putIntoDFUTimer.start();
  Serial.begin(115200);
}

void loop() {
}
