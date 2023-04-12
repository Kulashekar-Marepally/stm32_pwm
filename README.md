# stm32_pwm
PWM mode in STM32 board using Timer-3
PWM-PHASE WIDHT MODULATION
using PWM we can acquire desired Intensity in Light or Speed control in Motor
In STM32 board we can achieve PWM using Timers's 
Here i am using Timer-3(general purpose timer) in PWM mode intialised with PSC=0;
the reason for PSC=0 is we should not change the frequency of the system we have to achieve the PWM only using the Time period
depending on the Time period we get the Dutycycle i.e. Time period of ON with respect to Total time period
Dutycycle decides the Voltage range.
I am giving the dutycyle value and passing into the CCR(Capture Control Register) holds the value.
ARR(Auto-Relaod Register) is for giving the count value to the counter.
If the counter(CNT) reaches the ARR value, again it restarts from the '0'
the main agneda of the code is to get desired voltage level on the output (LED,MOTOR,etc.;)
