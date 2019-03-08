/*
Example for MOTION Click

    Date          : May 2018.
    Author        : Nenad Filipovic

Test configuration TIVA :
    
    MCU              : TM4C129XNCZAD
    Dev. Board       : EasyMx PRO v7 for TIVA ARM
    ARM Compiler ver : v6.0.0.0

---

Description :

The application is composed of three sections :

- System Initialization - Initializes INT pin as INPUT and RST pin as OUTPUT.
- Application Initialization - Initializes Driver enable's the motion detection.
- Application Task - (code snippet) - Detect the motion and send a notification to the UART.

*/

#include "Click_MOTION_types.h"
#include "Click_MOTION_config.h"

uint8_t state;
uint8_t oldState;

void systemInit()
{
     mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
     mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_RST_PIN, _GPIO_OUTPUT );

     mikrobus_logInit( _LOG_USBUART, 9600 );

    Delay_ms( 100 );
}

void applicationInit()
{
     motion_gpioDriverInit( (T_MOTION_P)&_MIKROBUS1_GPIO );
     motion_enable();
     mikrobus_logWrite("Initialized",_LOG_LINE);// _LOG_TEXT   ili _LOG_LINE
     state= 0;
     oldState  = 0;
}

void applicationTask()
{
   state = motion_detected();
   
   if ( state == 1 &&  oldState == 0)
   {
      oldState = 1;
      mikrobus_logWrite("Pokret detektovan", _LOG_LINE);
   }
   if ( oldState == 1 &  state == 0 )
   {
          mikrobus_logWrite("Nema Pokreta", _LOG_LINE);
          oldState = 0;
   }
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
            applicationTask();
    }
}