/*
 * global.h
 *
 *  Created on: Dec 4, 2023
 *      Author: ASUS
 */

/* D3=RED1
 * D4=YELLOW1
 * D5=GREEN1
 *
 * D6=P_RED
 * D7=P_GREEN
 *
 * D8=RED2
 * D9=YELLOW2
 * D10=GREEN2
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
#include "main.h"
#include "button.h"
#include "software_timer.h"

#define AUTO_M		0
#define	TUNING_M	1
#define MANUAL_M	2

#define FLAG_AUTO		flag[0]
#define FLAG_TUN		flag[1]
#define FLAG_BUT_CD		flag[2]
#define FLAG_AUTO_INC	flag[3]
#define FLAG_BUZZER		flag[4]

#define CHANGE_AUTOLIGHT

//uint8_t flag[10];
uint8_t flag_mode_press,flag_inc_press, flag_set_press, flag_hold,flag_man_press,flag_ped_press;
uint8_t mode;
uint8_t lightDuration[3];
uint8_t lightdisplay[2];


enum AUTOLIGHT{INIT,HOLD,RG,RY,GR,YR};
enum AUTOLIGHT autolightstate;

enum PEDESTRIANSTATE {OFF,ON};
enum PEDESTRIANSTATE pedstate;



//void* setAutoLightFlag();
//void* set7SEGFlag();
//void* setButtonCooldownFlag();
//void* setManualLightFlag();
//void* setAutoIncFlag();
#endif /* INC_GLOBAL_H_ */
