#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>


int main () {

    // настройка порта ввода-вывода
    rcc_periph_clock_enable(RCC_GPIOE);
    gpio_mode_setup(GPIOE, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO9);
    while (true){
      //  переключение светодиода  
      gpio_toggle(GPIOE, GPIO9);
    }
}
