/*
* /Devel/Stm32Sw/SintMate/Core/Src/SintMate/Images/Blue/D9blue.c
*  Created on: Feb 4, 2021
 *      Author: bmp2ili
 */
#include "main.h"
#include "main.h"
uint16_t D9blue_width=48;
uint16_t D9blue_height=80;
uint16_t D9blue[3840] = 
{
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0xa631,0xa631,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xa631,0xa631,0xa631,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xa631,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x1f03,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
0x0000,0x0000,0x0000,0x0000,0x08c0,0x1591,0xcd55,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xa0a2,0x4d91,0xcd55,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

};