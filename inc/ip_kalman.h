
/**
 *
 * @file    ip_kalman.h
 *
 * @brief   Kalman filter header file.
 *
 * @author  Theodore Ateba, tf.ateba@gmail.com
 *
 * @date    05 July 2016
 *
 */

/* Copyright (C) 2012 Kristian Lauszus, TKJ Electronics. All rights reserved.

 This software may be distributed and modified under the terms of the GNU
 General Public License version 2 (GPL2) as published by the Free Software
 Foundation and appearing in the file GPL2.TXT included in the packaging of
 this file. Please note that GPL2 Section 2[b] requires that all works based
 on this software must also be made publicly available under the terms of
 the GPL2 ("Copyleft").

 Contact information
 -------------------

 Kristian Lauszus, TKJ Electronics
 Web      :   http://www.tkjelectronics.com
 e-mail   :   kristianl@tkjelectronics.com

 Modify by:   Theodore Ateba, tf.ateba@gmail.com
 */

#ifndef IP_KALMAN_H
#define IP_KALMAN_H

/*==========================================================================*/
/* Functions prototypes.                                                    */
/*==========================================================================*/

void  kalman_init(void);
float kalman_get_angle(float newAngle, float newRate, float dt);
void  kalman_set_angle(float newAngle);
float kalman_get_rate(void);
void  kalman_set_q_angle(float newQ_angle);
void  kalman_set_q_bias(float newQ_bias);
void  kalman_set_r_measure(float newR_measure);
float kalman_get_q_angle(void);
float kalman_get_q_bias(void);
float kalman_get_r_measure(void);

#endif /* IP_KALMAN_H */

