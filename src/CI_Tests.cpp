#include "CI_Tests.h"
#include "Arduino.h"

CI_Tests::CI_Tests()
{
}

CI_Tests::~CI_Tests()
{
}

bool CI_Tests::begin()
{
    pinMode(LED_BUILTIN, OUTPUT);
    return true;
}

void CI_Tests::run()
{
    static uint32_t blinkTimestamp = millis();
    do
    {
        if (millis() - blinkTimestamp > 1000)
        {
            blinkTimestamp = millis();
            digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
            _testCount--;
        }
    } while (_testCount > 0);
}
