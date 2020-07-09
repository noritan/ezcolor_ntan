#include "cybsp.h"
#include "cy_rgb_led.h"

typedef enum {
    RED = CY_RGB_LED_COLOR_RED,
    GREEN = CY_RGB_LED_COLOR_GREEN,
    BLUE = CY_RGB_LED_COLOR_BLUE,
    YELLOW = CY_RGB_LED_COLOR_RED|CY_RGB_LED_COLOR_GREEN,
    CYAN = CY_RGB_LED_COLOR_BLUE|CY_RGB_LED_COLOR_GREEN,
    MAGENTA = CY_RGB_LED_COLOR_RED|CY_RGB_LED_COLOR_BLUE,
    WHITE = CY_RGB_LED_COLOR_RED|CY_RGB_LED_COLOR_GREEN|CY_RGB_LED_COLOR_BLUE,
    BLACK = (~WHITE)&WHITE
} color_t;

cy_rslt_t init_colors( void );
void color( color_t color );
