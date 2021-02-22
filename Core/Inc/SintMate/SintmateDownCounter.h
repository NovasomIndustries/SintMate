/*
 * SintmateDownCounter.h
 *
 *  Created on: Feb 9, 2021
 *      Author: fil
 */

#ifndef INC_SINTMATE_SINTMATEDOWNCOUNTER_H_
#define INC_SINTMATE_SINTMATEDOWNCOUNTER_H_

#define	DOWNCOUNTER_DIGITSPACE	8
#define	DOWNCOUNTER_POSX		((ILI9341_WIDTH-(DIGIT_WIDTH*3+DOWNCOUNTER_DIGITSPACE*2))/2)
#define	DOWNCOUNTER_100_POSX	DOWNCOUNTER_POSX
#define	DOWNCOUNTER_10_POSX		(DOWNCOUNTER_POSX+DOWNCOUNTER_DIGITSPACE+DIGIT_WIDTH)
#define	DOWNCOUNTER_1_POSX		(DOWNCOUNTER_POSX+DOWNCOUNTER_DIGITSPACE+DIGIT_WIDTH*2)
#define	DOWNCOUNTER_POSY		140

#define	INITIAL_DOWNCOUNTER_VALUE	30

#define	DOWNCOUNTER_YELLOW_THRESHOLD			30
#define	DOWNCOUNTER_RED_THRESHOLD				10

#define	DOWNCOUNTER_MAX							180
#define	DOWNCOUNTER_TYP							120
#define	DOWNCOUNTER_MIN							10

extern	void Tim100MSec_callback(void);
extern	void InitCounter(void);
extern	void SetCounter(uint32_t value, uint32_t color);
extern	void DecrementCounter(void);


#endif /* INC_SINTMATE_SINTMATEDOWNCOUNTER_H_ */
