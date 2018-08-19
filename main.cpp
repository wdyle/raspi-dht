#include <iostream>

extern "C" {
#include "adafruit_dht/source/Raspberry_Pi_2/pi_2_dht_read.h"
}

int main(int argc, char *argv[])
{
    float humidity, temperature;
    int result = pi_2_dht_read(DHT22, 4, &humidity, &temperature);

    std::cout << "Hello, world." << std::endl;
    std::cout << result << std::endl;
    std::cout << humidity << std::endl;
    std::cout << temperature << std::endl;
    return 0;
}
