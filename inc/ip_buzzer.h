
/**
 *
 * @file    ip_buzzer.h
 *
 * @brief   Buzzer driver header file.
 *
 * @author  Theodore Ateba, tf.ateba@gmail.com
 *
 * @date    22 August 2017
 *
 */

#ifndef IP_BUZZER_H
#define IP_BUZZER_H

/*==========================================================================*/
/* Driver macros.                                                           */
/*==========================================================================*/

/* Pin used to control the buzzer. */
//#define BUZZER_PIN_PORT   IOPORT11
//#define BUZZER_PIN        46

/*==========================================================================*/
/* Functions prototypes.                                                    */
/*==========================================================================*/

void buzzer_init(void);
void buzzer_sound_play(void);
void buzzer_sound_stop(void);

#endif /* IP_BUZZER_H */

