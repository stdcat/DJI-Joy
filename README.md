# DJI-Joy

**改进自任云帆的代码**

`DJI_Joy.h`和`DJI_Joy.c`中包含了 Robomaster DR16接收机数据包解码内容 对应DT7遥控器

代码功能：将串口收到的数据包解码为各个通道的值以及开关对应位 包含：四个摇杆通道，两个拨动开关

对应遥控器链接：https://www.robomaster.com/zh-CN/products/components/detail/122

接收机详细手册参见： [RoboMaster 机器人专用遥控器（接收机）用户手册](https://rm-static.djicdn.com/tem/4.RoboMaster%20%E6%9C%BA%E5%99%A8%E4%BA%BA%E4%B8%93%E7%94%A8%E9%81%A5%E6%8E%A7%E5%99%A8%EF%BC%88%E6%8E%A5%E6%94%B6%E6%9C%BA%EF%BC%89%E7%94%A8%E6%88%B7%E6%89%8B%E5%86%8C.pdf) 

> Todo:  添加DT7遥控器左上角拨轮解码

