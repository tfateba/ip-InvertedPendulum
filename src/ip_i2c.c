
/**
 *
 * @file    ip_i2c.c
 *
 * @brief   I2C driver source file.
 *
 * @author  Theodore Ateba, tf.ateba@gmail.com
 *
 * @date    05 July 2016
 *
 */

/*
    IP - Copyright (C) 2015..2018 Theodore Ateba

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/*==========================================================================*/
/* Include files.                                                           */
/*==========================================================================*/

/* ChibiOS files. */
#include "hal.h"

/*==========================================================================*/
/* Driver functions.                                                        */
/*==========================================================================*/

/**
 * @brief   Read a register or a block of registers from the sensor.
 *
 * @param[in] i2cp    pointer to the i2c interface
 * @param[in] addr    slave address without R/W bit
 * @param[in] reg     pointer to the first register address to read
 * @param[in] rxbuf   pointer to the buffer to store the data read
 * @param[in] length  size of data to read
 * @return    msg     the result of the reading operation
 */
msg_t i2c_read_registers( I2CDriver *i2cp, uint8_t addr, uint8_t *reg,
                        uint8_t *rxbuf, uint8_t length) {

  msg_t msg;

  i2cAcquireBus(i2cp);
  msg = i2cMasterTransmitTimeout(i2cp, addr, reg, 1, rxbuf, length, MS2ST(1));
  i2cReleaseBus(i2cp);

  return msg;
}

/**
 * @brief   Write to a register or a block of registers on the sensor.
 *
 * @param[in] i2cp    pointer to the i2c interface
 * @param[in] addr    slave address without R/W bit
 * @param[in] txbuf   pointer to the data to write into the sensor
 *                    txbuf[0] is the first register to write
 * @param[in] length  size of data to write to the sensor
 * @return    msg     the result of the writing operation
 */
msg_t i2c_write_registers(I2CDriver *i2cp, uint8_t addr, uint8_t *txbuf,
                        uint8_t length) {

  msg_t msg;

  i2cAcquireBus(i2cp);
  msg = i2cMasterTransmitTimeout(i2cp, addr, txbuf, length, NULL, 0, MS2ST(1));
  i2cReleaseBus(i2cp);

  return msg;
}

