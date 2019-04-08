/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2015 Damien P. George
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef MICROPY_INCLUDED_STM32_DMA_H
#define MICROPY_INCLUDED_STM32_DMA_H

typedef struct _dma_descr_t dma_descr_t;

#if defined(STM32F0) || defined(STM32F4) || defined(STM32F7) || defined(STM32H7)

    extern const dma_descr_t dma_I2C_1_RX;
    extern const dma_descr_t dma_SPI_3_RX;
    extern const dma_descr_t dma_I2C_4_RX;
    extern const dma_descr_t dma_I2C_3_RX;
    extern const dma_descr_t dma_I2C_2_RX;
    extern const dma_descr_t dma_SPI_2_RX;
    extern const dma_descr_t dma_SPI_2_TX;
    extern const dma_descr_t dma_I2C_3_TX;
    extern const dma_descr_t dma_I2C_4_TX;
    extern const dma_descr_t dma_DAC_1_TX;
    extern const dma_descr_t dma_DAC_2_TX;
    extern const dma_descr_t dma_SPI_3_TX;
    extern const dma_descr_t dma_I2C_1_TX;
    extern const dma_descr_t dma_I2C_2_TX;
    extern const dma_descr_t dma_SDMMC_2;
    extern const dma_descr_t dma_SPI_1_RX;
    extern const dma_descr_t dma_SPI_5_RX;
    extern const dma_descr_t dma_SDIO_0;
    extern const dma_descr_t dma_SPI_4_RX;
    extern const dma_descr_t dma_SPI_5_TX;
    extern const dma_descr_t dma_SPI_4_TX;
    extern const dma_descr_t dma_SPI_6_TX;
    extern const dma_descr_t dma_SPI_1_TX;
    extern const dma_descr_t dma_SDMMC_2;
    extern const dma_descr_t dma_SPI_6_RX;
    extern const dma_descr_t dma_SDIO_0;
    extern const dma_descr_t dma_DCMI_0;

#elif defined(STM32L4)

    extern const dma_descr_t dma_ADC_1_RX;
    extern const dma_descr_t dma_ADC_2_RX;
    extern const dma_descr_t dma_SPI_1_RX;
    extern const dma_descr_t dma_I2C_3_TX;
    extern const dma_descr_t dma_ADC_3_RX;
    extern const dma_descr_t dma_SPI_1_TX;
    extern const dma_descr_t dma_I2C_3_RX;
    extern const dma_descr_t dma_DAC_1_TX;
    extern const dma_descr_t dma_SPI_2_RX;
    extern const dma_descr_t dma_I2C_2_TX;
    extern const dma_descr_t dma_DAC_2_TX;
    extern const dma_descr_t dma_SPI_2_TX;
    extern const dma_descr_t dma_I2C_2_RX;
    extern const dma_descr_t dma_I2C_1_TX;
    extern const dma_descr_t dma_I2C_1_RX;
    extern const dma_descr_t dma_SPI_3_RX;
    extern const dma_descr_t dma_SPI_3_TX;
    extern const dma_descr_t dma_SDIO_0;

#elif defined(STM32F3)
    // DMA1 - Channel1 (Select only one a time)
    extern const dma_descr_t dma_ADC_1_RX;
        extern const dma_descr_t dma_TIM2_CH3;
        extern const dma_descr_t dma_TIM4_CH1;
        extern const dma_descr_t dma_TIM17_CH1;
        extern const dma_descr_t dma_TIM17_UP;
    // DMA1 - Channel2 (Select only one a time)
    extern const dma_descr_t dma_SPI_1_RX;
        extern const dma_descr_t dma_USART_3_TX;
        extern const dma_descr_t dma_TIM1_CH1;
        extern const dma_descr_t dma_TIM2_UP;
        extern const dma_descr_t dma_TIM3_CH3;
    // DMA1 - Channel3 (Select only one a time)
    extern const dma_descr_t dma_SPI_1_TX;
        extern const dma_descr_t dma_USART_3_RX;
        extern const dma_descr_t dma_TIM1_CH2;
        extern const dma_descr_t dma_TIM3_CH4;
        extern const dma_descr_t dma_TIM3_UP;
        extern const dma_descr_t dma_TIM6_UP;
        extern const dma_descr_t dma_DAC_1_TX;
        extern const dma_descr_t dma_TIM16_CH1;
        extern const dma_descr_t dma_TIM16_UP;
    // DMA1 - Channel4 (Select only one a time)
    extern const dma_descr_t dma_SPI_2_RX;
        extern const dma_descr_t dma_USART_1_TX;
        extern const dma_descr_t dma_I2C_2_TX;
        extern const dma_descr_t dma_TIM1_CH4;
        extern const dma_descr_t dma_TIM1_TRIG;
        extern const dma_descr_t dma_TIM1_COM;
        extern const dma_descr_t dma_TIM4_CH2;
        extern const dma_descr_t dma_TIM7_UP;
        extern const dma_descr_t dma_DAC_2_TX;
    // DMA1 - Channel5 (Select only one a time)
    extern const dma_descr_t dma_SPI_2_TX;
        extern const dma_descr_t dma_USART_1_RX;
        extern const dma_descr_t dma_I2C_2_RX;
        extern const dma_descr_t dma_TIM1_UP;
        extern const dma_descr_t dma_TIM2_CH1;
        extern const dma_descr_t dma_TIM4_CH3;
        extern const dma_descr_t dma_TIM15_CH1;
        extern const dma_descr_t dma_TIM15_UP;
        extern const dma_descr_t dma_TIM15_TRIG;
        extern const dma_descr_t dma_TIM15_COM;
    // DMA1 - Channel6 (Select only one a time)
    extern const dma_descr_t dma_USART_2_RX;
        extern const dma_descr_t dma_I2C_1_TX;
        extern const dma_descr_t dma_TIM1_CH3;
        extern const dma_descr_t dma_TIM3_CH1;
        extern const dma_descr_t dma_TIM3_TRIG;
        extern const dma_descr_t dma_TIM16_CH1;
        extern const dma_descr_t dma_TIM16_UP;
    // DMA1 - Channel7 (Select only one a time)
    extern const dma_descr_t dma_USART_2_TX;
        extern const dma_descr_t dma_I2C_1_RX;
        extern const dma_descr_t dma_TIM2_CH2;
        extern const dma_descr_t dma_TIM2_CH4;
        extern const dma_descr_t dma_TIM4_UP;
        extern const dma_descr_t dma_TIM17_CH1;
        extern const dma_descr_t dma_TIM17_UP;
    // DMA2 - Channel1 (Select only one a time)
    extern const dma_descr_t dma_ADC_2_RX;
        extern const dma_descr_t dma_SPI_3_RX;
        extern const dma_descr_t dma_TIM8_CH3;
        extern const dma_descr_t dma_TIM8_UP;
    // DMA2 - Channel2 (Select only one a time)
    extern const dma_descr_t dma_ADC_4_RX;
        extern const dma_descr_t dma_SPI_3_TX;
        extern const dma_descr_t dma_TIM8_CH4;
        extern const dma_descr_t dma_TIM8_TRIG;
        extern const dma_descr_t dma_TIM8_COM;
    // DMA2 - Channel3 (Select only one a time)
    extern const dma_descr_t dma_ADC_2_RX;
        extern const dma_descr_t dma_UART_4_RX;
        extern const dma_descr_t dma_TIM6_UP;
        extern const dma_descr_t dma_DAC_1_TX;
        extern const dma_descr_t dma_TIM8_CH1;
    // DMA2 - Channel4 (Select only one a time)
    extern const dma_descr_t dma_ADC_4_RX;
        extern const dma_descr_t dma_TIM7_UP;
        extern const dma_descr_t dma_DAC_2_TX;
    // DMA2 - Channel5 (Select only one a time)
    extern const dma_descr_t dma_ADC_3_RX;
        extern const dma_descr_t dma_UART_4_TX;
        extern const dma_descr_t dma_TIM8_CH2;


#endif

typedef union {
    uint16_t    enabled;    // Used to test if both counters are == 0
    uint8_t     counter[2];
} dma_idle_count_t;
extern volatile dma_idle_count_t dma_idle;
#define DMA_IDLE_ENABLED()  (dma_idle.enabled != 0)

#define DMA_SYSTICK_MASK            0x0e
#define DMA_MSECS_PER_SYSTICK       (DMA_SYSTICK_MASK + 1)
#define DMA_IDLE_TICK_MAX           (8)     // 128 msec
#define DMA_IDLE_TICK(tick)         (((tick) & DMA_SYSTICK_MASK) == 0)


void dma_init(DMA_HandleTypeDef *dma, const dma_descr_t *dma_descr, uint32_t dir, void *data);
void dma_init_handle(DMA_HandleTypeDef *dma, const dma_descr_t *dma_descr, uint32_t dir, void *data);
void dma_deinit(const dma_descr_t *dma_descr);
void dma_invalidate_channel(const dma_descr_t *dma_descr);
void dma_idle_handler(int controller);

#endif // MICROPY_INCLUDED_STM32_DMA_H
