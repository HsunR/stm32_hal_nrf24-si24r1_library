/*
 * 25-JUL-2024
 * STM32 HAL NRF24 LIBRARY
 */

#ifndef _NRF_24_CONF_H_
#define _NRF_24_CONF_H_

#include "main.h"
#define hspiX hspi1
#define spi_w_timeout 1000
#define spi_r_timeout 1000
#define spi_rw_timeout 1000

#define csn_gpio_port NRF_SCN_GPIO_Port
#define csn_gpio_pin NRF_SCN_Pin

#define ce_gpio_port NRF_CE_GPIO_Port
#define ce_gpio_pin NRF_CE_Pin

// NRF24配置参数
#define PLD_S 32 // 最大有效负载长度(32字节)
#define NRF24_ADDR_WIDTH      5  // 地址宽度(3-5字节)
#define TX_RX_ADDR {0x45, 0x55, 0x67, 0x10, 0x21} // 发送接收地址
#define NRF24_MASK_IRQ_RX_DR  0  // 0:使能RX_DR中断, 1:禁用RX_DR中断
#define NRF24_MASK_IRQ_TX_DS  1  // 0:使能TX_DS中断, 1:禁用TX_DS中断
#define NRF24_MASK_IRQ_MAX_RT 1  // 0:使能MAX_RT中断, 1:禁用MAX_RT中断

#define NRF24_AUTO_ACK        1  // 1:启用自动确认, 0:禁用自动确认
#define NRF24_EN_ACK_PLD      1  // 1:启用ACK负载, 0:禁用ACK负载
#define NRF24_ENABLE_DPL      1  // 1:启用动态负载长度, 0:禁用动态负载长度

#define NRF24_EN_CRC          1  // 1:启用CRC校验, 0:禁用CRC校验
#define NRF24_CRC_LENGTH      _1byte  // CRC长度: _1byte或_2byte

#define NRF24_TX_POWER        _0dbm  // 发射功率: _m18dbm, _m12dbm, _m6dbm, _0dbm
#define NRF24_ENHANCE_TX_PWR  1  // 1:启用增强发射功率, 0:禁用增强发射功率
#define NRF24_DATA_RATE       _1mbps  // 数据速率: _250kbps, _1mbps, _2mbps
#define NRF24_CHANNEL         90  // 通道号(0-127)


#define NRF24_AUTO_RETR_DELAY 8  // 自动重传延迟(0-15, 单位:250us)
#define NRF24_AUTO_RETR_LIMIT 10  // 自动重传次数(0-15)

#endif

