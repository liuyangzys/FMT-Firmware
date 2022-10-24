#ifndef __SPCD_CAMERA_CONFIG_SET_H__
#define __SPCD_CAMERA_CONFIG_SET_H__

//旁路ISP，操作Sensor
_EXT_DTCM1_ROD const uint16_t BYPASS_ON[6] = {
	0xfffd, 0x80,
	0xfffe, 0x50,
	0x004d, 0x01
};

//去旁路ISP，操作ISP
_EXT_DTCM1_ROD const uint16_t BYPASS_OFF[6] = {
	0xfffd, 0x80,
	0xfffe, 0x50,
	0x004d, 0x00
};

//亮度，3对为1组
_EXT_DTCM1_ROD const uint16_t CONFIG_BRIGHTNESS[] = {
	//-3
	0xfffe, 0x14,
	0x006c, 0x01,
	0x006d, 0x90,
	//-2
	0xfffe, 0x14,
	0x006c, 0x01,
	0x006d, 0xb0,
	//-1
	0xfffe, 0x14,
	0x006c, 0x01,
	0x006d, 0xd0,
	//0,需要与初始化代码里目标亮度值一致
	0xfffe, 0x14,
	0x006c, 0x01,
	0x006d, 0xf0,
	//1
	0xfffe, 0x14,
	0x006c, 0x02,
	0x006d, 0x10,
	//2
	0xfffe, 0x14,
	0x006c, 0x02,
	0x006d, 0x30,
	//3
	0xfffe, 0x14,
	0x006c, 0x02,
	0x006d, 0x50
};

//饱和度（正常特效）
const uint16_t CONFIG_SPECIAL_EFFECTS_NORMAL[] = {
	0xfffe, 0x30,
	0x1700, 0x09,
	0x1701, 0x58,
	0x1702, 0x60
};
//饱和度（黑白特效）
_EXT_DTCM1_ROD const uint16_t CONFIG_SPECIAL_EFFECTS_BLACK_AND_WHITE[] = {
	0xfffe, 0x30,
	0x1700, 0x81,
	0x1701, 0x58,
	0x1702, 0x60
};
//饱和度（浅绿特效）
_EXT_DTCM1_ROD const uint16_t CONFIG_SPECIAL_EFFECTS_SHALLOW_GREEN[] = {
	0xfffe, 0x30,
	0x1700, 0x4b,
	0x1701, 0xa0,
	0x1702, 0x40
};
//饱和度（复古特效）
_EXT_DTCM1_ROD const uint16_t CONFIG_SPECIAL_EFFECTS_RETRO[] = {
	0xfffe, 0x30,
	0x1700, 0x4b,
	0x1701, 0x40,
	0x1702, 0xa0
};
//饱和度（负片特效）
_EXT_DTCM1_ROD const uint16_t CONFIG_SPECIAL_EFFECTS_NEGATIVE[] = {
	0xfffe, 0x30,
	0x1700, 0x10,
	0x1701, 0x58,
	0x1702, 0x60
};

//对比度，3对为1组
_EXT_DTCM1_ROD const uint16_t CONFIG_CONTRAST_RATIO[] = {
	//-2
	0xfffe, 0x30,
	0x1700, 0x09,
	0x1704, 0x1c,
	//-1
	0xfffe, 0x30,
	0x1700, 0x09,
	0x1704, 0x20,
	//0,需要与初始化代码里目标亮度值一致
	0xfffe, 0x30,
	0x1700, 0x09,
	0x1704, 0x24,
	//1
	0xfffe, 0x30,
	0x1700, 0x09,
	0x1704, 0x28,
	//2
	0xfffe, 0x30,
	0x1700, 0x09,
	0x1704, 0x2c
};

//白平衡，AUTO
_EXT_DTCM1_ROD const uint16_t CONFIG_WHITE_BALANCE_AUTO[] = {
	0xfffe, 0x14,
	0x0027, 0x01,
	0xfffe, 0x30,
	0x0729, 0x03,
	0x072a, 0x10,
	0x072b, 0x03,
	0x072c, 0x10,
	0x072d, 0x03,
	0x072d, 0x10
};
//白平衡，5000K
_EXT_DTCM1_ROD const uint16_t CONFIG_WHITE_BALANCE_5000K[] = {
	0xfffe, 0x14,
	0x0027, 0x00,
	0xfffe, 0x30,
	0x0729, 0x07,
	0x072a, 0x48,
	0x072b, 0x04,
	0x072c, 0x00,
	0x072d, 0x03,
	0x072d, 0x30
};
//白平衡，6500K
_EXT_DTCM1_ROD const uint16_t CONFIG_WHITE_BALANCE_6500K[] = {
	0xfffe, 0x14,
	0x0027, 0x00,
	0xfffe, 0x30,
	0x0729, 0x03,
	0x072a, 0x10,
	0x072b, 0x03,
	0x072c, 0x00,
	0x072d, 0x03,
	0x072d, 0x10
};
//白平衡，7500K
_EXT_DTCM1_ROD const uint16_t CONFIG_WHITE_BALANCE_7500K[] = {
	0xfffe, 0x14,
	0x0027, 0x01,
	0xfffe, 0x30,
	0x0729, 0x07,
	0x072a, 0x48,
	0x072b, 0x04,
	0x072c, 0x00,
	0x072d, 0x03,
	0x072d, 0x30
};

#endif
