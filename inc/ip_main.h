
/**
 *
 * @file    ipmain.h
 *
 * @brief   main application header file.
 *
 * @author  Theodore Ateba, tf.ateba@gmail.com
 *
 * @date    17 November 2017
 *
 */

#ifndef IPMAIN_H
#define IPMAIN_H

/* Project files. */
#include "ip_encoder.h"
#include "ip_motor.h"
#include "ip_mpu6050.h"
#include "ip_pid.h"


struct ROBOTDriver {
  MPU6050Driver imu;

  PIDDriver     lpid;
  PIDDriver     rpid;

  MOTORDriver   lmotor;
  MOTORDriver   rmotor;

  ENCODERDriver lencoder;
  ENCODERDriver rencoder;
};

typedef struct ROBOTDriver ROBOTDriver;

#endif /* IPMAIN_H */
