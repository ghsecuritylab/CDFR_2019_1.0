/*
 * A_commandes.h
 *
 *  Created on: 5 août 2018
 *      Author: guillaume
 */

#ifndef A_COMMANDES_H_
#define A_COMMANDES_H_

#include "A_TCP.h"
#include "gpio.h"
#include "F_VL53L1X.h"
#include "main.h"

#define CMD_INFO			0x01
#define CMD_SET_LED			0x02
#define CMD_GET_LED			0x03

#define CMD_GET_DISTANCES	0x04

#define CMD_SET_POSITION	0x05
#define CMD_GET_POSITION	0x06
#define CMD_GO				0x07
#define CMD_ADD_POINT		0x08
#define CMD_REMOVE_POINT	0x09
#define CMD_GET_LIST_POINTS	0x0A

#define STATUS_OK			0x00
#define STATUS_UNKNOWN_CMD	0x01
#define STATUS_ERROR_PARAM	0x02



void F_Cmd_Info();
void F_Process_Command(Tcp_command s_cmd_received, Tcp_answer *s_cmd_answer);

uint8_t F_Cmd_SetLED(Tcp_command s_cmd_received, Tcp_answer *s_cmd_answer);
uint8_t F_Cmd_GetLED(Tcp_command s_cmd_received, Tcp_answer *s_cmd_answer);
uint8_t F_Cmd_GetDistance(Tcp_command s_cmd_received, Tcp_answer *s_cmd_answer);

#endif /* A_COMMANDES_H_ */
