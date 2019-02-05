
#define DATA_PIN        A1

#include "mbed.h"
#include "DS1820.h"
 
DS1820 probe(DATA_PIN);
 
int main() {
    while(1) {
        probe.convertTemperature(true, DS1820::all_devices);         //Start temperature conversion, wait until ready
        printf("Temperature is %3.1fC\r\n", probe.temperature());
        wait(1);
    }
}
