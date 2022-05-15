/**
 * @file wiper2.h
 * @author Rohit Varshney
 * @brief Header file for wiper_control_system
 *
 */
#ifndef WIPER2_H_INCLUDED
#define WIPER2_H_INCLUDED

#define __vo volatile
#define __weak __attribute__((weak))

void NMI_Handler                                (void) __attribute__ ((weak, alias("Dummy_Handler")));

void HardFault_Handler                          (void) __attribute__ ((weak, alias("Dummy_Handler")));

void MemManage_Handler                          (void) __attribute__ ((weak, alias("Dummy_Handler")));

void TIM1_CC_IRQHandler 			            (void) __attribute__ ((weak, alias("Dummy_Handler")));         

void TIM2_IRQHandler 				            (void) __attribute__ ((weak, alias("Dummy_Handler")));            

void TIM3_IRQHandler 				            (void) __attribute__ ((weak, alias("Dummy_Handler")));            

void TIM4_IRQHandler 				            (void) __attribute__ ((weak, alias("Dummy_Handler")));            

void I2C1_EV_IRQHandler 			            (void) __attribute__ ((weak, alias("Dummy_Handler")));         

void I2C1_ER_IRQHandler 			            (void) __attribute__ ((weak, alias("Dummy_Handler")));         

void I2C2_EV_IRQHandler 			            (void) __attribute__ ((weak, alias("Dummy_Handler")));         

void I2C2_ER_IRQHandler 			            (void) __attribute__ ((weak, alias("Dummy_Handler")));         

void SPI1_IRQHandler  				            (void) __attribute__ ((weak, alias("Dummy_Handler")));           

void SPI2_IRQHandler 				            (void) __attribute__ ((weak, alias("Dummy_Handler")));            

void USART1_IRQHandler  			            (void) __attribute__ ((weak, alias("Dummy_Handler")));     

void UART4_IRQHandler            	            (void) __attribute__ ((weak, alias("Dummy_Handler")));

void UART5_IRQHandler            	            (void) __attribute__ ((weak, alias("Dummy_Handler")));

void USART6_IRQHandler           	            (void) __attribute__ ((weak, alias("Dummy_Handler")));

void I2C3_EV_IRQHandler          	            (void) __attribute__ ((weak, alias("Dummy_Handler")));

void I2C3_ER_IRQHandler          	            (void) __attribute__ ((weak, alias("Dummy_Handler")));

void FPU_IRQHandler              	            (void) __attribute__ ((weak, alias("Dummy_Handler")));                          


#endif 