/*
 * pwm.h
 *
 *  Created on: Feb 22, 2023
 *      Author: KWU1COB
 */

#ifndef PWM_H_
#define PWM_H_

#define RCC   0x40023800
#define AHB1  0x40020000
#define APB1  0x40000000
#define TIM3  0x40000400
#define GPIOC 0x40020800

#define RCC_AHB1ENR  *(volatile uint32_t*)(RCC+0x30)
#define RCC_APB1ENR  *(volatile uint32_t*)(RCC+0x40)

#define GPIOC_MODER *(volatile uint32_t*)(GPIOC+0x00)
#define GPIOC_AFRL  *(volatile uint32_t*)(GPIOC+0x20)
#define GPIOC_ODR   *(volatile uint32_t*)(GPIOC+0x14)

#define TIM3_PSC    *(volatile uint32_t*)(TIM3+0x28)   //page no 642
#define TIM3_ARR    *(volatile uint32_t*)(TIM3+0x2C)   //page no 642
#define TIM3_CNT    *(volatile uint32_t*)(TIM3+0x24)   //page no 642
#define TIM3_CR1    *(volatile uint32_t*)(TIM3+0x00)   //page no 627
#define TIM3_SR     *(volatile uint32_t*)(TIM3+0x10)    //page no 633
#define TIM3_CCMR1   *(volatile uint32_t*)(TIM3+0x18) //page no 636
#define TIM3_CCER    *(volatile uint32_t*)(TIM3+0x20)  //page no 640
#define TIM3_CCR1    *(volatile uint32_t*)(TIM3+0x34)  //677
#define TIM3_EGR      *(volatile uint32_t*)(TIM3+0x14) //

#endif /* PWM_H_ */
