#ifndef __APP_H
#define __APP_H

#include "main.h"
#include "tim.h"
#include "led.h"
//#include "key.h"
#include "oled.h"
#include "uart_it_config.h"
#include "pwm.h"
#include "yuntai.h"




void App_Init(void);
int App_Task(void);

#endif // !__APP_H
