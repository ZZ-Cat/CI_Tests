#include "CI_Tests.h"

CI_Tests ci_tests;

void setup()
{
    if (ci_tests.begin() != true)
    {
        Serial.println("Failed to initialize CI_Tests");
        while (1)
            ;
    }
    else
    {
        Serial.println("CI_Tests initialized");
    }
}

void loop()
{
    ci_tests.run();
}
