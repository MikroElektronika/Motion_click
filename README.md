![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# MOTION Click

---

- **CIC Prefix**  : MOTION
- **Author**      : Nenad Filipovic
- **Verison**     : 1.0.0
- **Date**        : May 2018.

---

### Software Support

We provide a library for the MOTION Click on our [LibStock](https://libstock.mikroe.com/projects/view/1089/motion-click-example) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

Library provides generic functions for working with the click board.

Key functions :

- ```void motion_enable();  ``` - Function places the sensor in detection mode.
- ``` void motion_disable(); ``` - Function disables the sensor.
- ``` uint8_t motion_detected(); ``` - Function will return 1 if a motion is detected.

**Examples Description**

The application is composed of three sections :

- System Initialization - Initializes INT pin as INPUT and RST pin as OUTPUT.
- Application Initialization - Initializes Driver enable's the motion detection.
- Application Task - (code snippet) - Detect the motion and send a notification to the UART.


```.c
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
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/1089/motion-click-example) page.

Other mikroE Libraries used in the example:

- UART Library

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
---
