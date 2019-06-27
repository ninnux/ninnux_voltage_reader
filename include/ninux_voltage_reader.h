#ifndef NINUX_VOLTAGE_READER
#define NINUX_VOLTAGE_READER



#include <stdio.h>
#include <stdlib.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "driver/adc.h"
#include "esp_adc_cal.h"

#define DEFAULT_VREF    1100        //Use adc2_vref_to_gpio() to obtain a better estimate
#define NO_OF_SAMPLES   64          //Multisampling


#define GPIO_OUTPUT_IO_0   CONFIG_TRANSISTOR_GPIO 
//#define GPIO_OUTPUT_IO_0    18
//#define GPIO_OUTPUT_IO_1    19
#define GPIO_OUTPUT_PIN_SEL  1ULL<<GPIO_OUTPUT_IO_0
//#define GPIO_OUTPUT_PIN_SEL  ((1ULL<<GPIO_OUTPUT_IO_0) | (1ULL<<GPIO_OUTPUT_IO_1))

//#define R2 33
//#define R1 10
#define MY_R2 CONFIG_R2 
#define MY_R1 CONFIG_R1

static esp_adc_cal_characteristics_t *adc_chars;
static const adc_channel_t channel = ADC_CHANNEL_6;     //GPIO34 if ADC1, GPIO14 if ADC2
static const adc_atten_t atten = ADC_ATTEN_DB_0;
static const adc_unit_t unit = ADC_UNIT_1;

static void check_efuse();

static void print_char_val_type(esp_adc_cal_value_t val_type)
void gpio_init();
void voltage_reader();


#endif

