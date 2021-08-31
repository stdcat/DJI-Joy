/*
 * DJI_Joy.c
 *
 *  Created on: Aug 26, 2021
 *      Author: stdcat
 */

#include "DJI_Joy.h"

Remote_t Raw_Data
uint8_t JoyStickReceiveData[18];//串口接受数据的数组

void joystickDecode(){//写在回调函数里面 解码收到的信息

     /*
     * Raw_Data.chx range: [CHx_BIAS,CHx_BIAS+CH_RANGE]
     */
    Raw_Data.ch0 = ((int16_t)JoyStickReceiveData[0] | ((int16_t)JoyStickReceiveData[1] << 8)) & 0x07FF;
    Raw_Data.ch1 = (((int16_t)JoyStickReceiveData[1] >> 3) | ((int16_t)JoyStickReceiveData[2] << 5)) & 0x07FF;
    Raw_Data.ch2 = (((int16_t)JoyStickReceiveData[2] >> 6) | ((int16_t)JoyStickReceiveData[3] << 2) | ((int16_t)JoyStickReceiveData[4] << 10)) & 0x07FF;
    Raw_Data.ch3 = (((int16_t)JoyStickReceiveData[4] >> 1) | ((int16_t)JoyStickReceiveData[5]<<7)) & 0x07FF;


    Raw_Data.left = ((JoyStickReceiveData[5] >> 4) & 0x000C) >> 2;
    Raw_Data.right = ((JoyStickReceiveData[5] >> 4) & 0x0003);


    switch(Raw_Data.right)
    {
        case 1:
            /* right top */
            break;
        case 3:
            /* right mid */
            break;
        case 2:
            /* right bottom */
            break;
        default:
            break;
    }



    switch(Raw_Data.left)
    {
        case 1:
            /* left top */
            break;
        case 3:
            /* left mid */
            break;
        case 2:
            /* left bottom */
            break;
        default:
            break;
    }


}
