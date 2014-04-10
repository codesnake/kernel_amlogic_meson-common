#ifndef _GSLX680B_H_
#define _GSLX680B_H_


//#define SCREEN_MAX_X 		1024
//#define SCREEN_MAX_Y 		600

/*修正边缘坐标不准的问题，一般情况下不要打开这个宏，
除非对边缘要求比较准，配置文件里要把到边率设成0%*/
#define GSLX680_I2C_NAME 	"gslx680b"

//hycui #define STRETCH_FRAME
#ifdef STRETCH_FRAME
#define CTP_MAX_X 		SCREEN_MAX_Y
#define CTP_MAX_Y 		SCREEN_MAX_X


#define X_STRETCH_MAX	(CTP_MAX_X/10)	/*X方向 拉伸的分辨率，一般设一个通道的分辨率*/
#define Y_STRETCH_MAX	(CTP_MAX_Y/15)	/*Y方向 拉伸的分辨率，一般设一个通道的分辨率*/
#define XL_RATIO_1	25	/*X方向 左边拉伸的分辨率第一级比例，百分比*/
#define XL_RATIO_2	45	/*X方向 左边拉伸的分辨率第二级比例，百分比*/
#define XR_RATIO_1	35	/*X方向 右边拉伸的分辨率第一级比例，百分比*/
#define XR_RATIO_2	55	/*X方向 右边拉伸的分辨率第二级比例，百分比*/
#define YL_RATIO_1	30	/*Y方向 左边拉伸的分辨率第一级比例，百分比*/
#define YL_RATIO_2	45	/*Y方向 左边拉伸的分辨率第二级比例，百分比*/
#define YR_RATIO_1	40	/*Y方向 右边拉伸的分辨率第一级比例，百分比*/
#define YR_RATIO_2	65	/*Y方向 右边拉伸的分辨率第二级比例，百分比*/

#define X_STRETCH_CUST	(CTP_MAX_X/10)	/*X方向 自定义拉伸的分辨率，一般设一个通道的分辨率*/
#define Y_STRETCH_CUST	(CTP_MAX_Y/15)	/*Y方向 自定义拉伸的分辨率，一般设一个通道的分辨率*/
#define X_RATIO_CUST	10	/*X方向 自定义拉伸的分辨率比例，百分比*/
#define Y_RATIO_CUST	10	/*Y方向 自定义拉伸的分辨率比例，百分比*/
#endif

#define 	GSL_NOID_VERSION
#ifdef	GSL_NOID_VERSION
struct gsl_touch_info
{
	int x[10];
	int y[10];
	int id[10];
	int finger_num;	
};
extern unsigned int gsl_mask_tiaoping(void);
extern unsigned int gsl_version_id(void);
extern void gsl_alg_id_main(struct gsl_touch_info *cinfo);
extern void gsl_DataInit(int *ret);

extern unsigned int gsl_config_data_idB[] =
{
	0x72d7a4,  
	0x200,
	0xdbd0f5cd,0,
	0,
	0,0,0,
	0,0,0,0,0,0,0,0,


	0x102,0x5,0xc0016,0xc0016,0x3000400,0,0x5100,0,
	0,0x320014,0,0,0,0,0,0,
	0x8,0x4000,0x1000,0x10000000,0x10000000,0,0,0,
	0x1b6db688,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0x40,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,

	0,//key_map
	0x3200384,0x64,0x503e8,//0
	0,0,0,//1
	0,0,0,//2
	0,0,0,//3
	0,0,0,//4
	0,0,0,//5
	0,0,0,//6
	0,0,0,//7

	0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,


	0x221,
	0,0,0,0,0,0,0,0,
	0,0x2010100,0x6050403,0xb090807,0x100f0d0c,0x15141311,0x1a191816,0x1f1e1c1b,
	0x24232220,0x29282726,0x2e2d2c2a,0x3332302f,0x38373634,0x3d3c3b3a,0x3f3f3e3e,0x3f3f3f3f,
	0x1000000,0x5040302,0xa090806,0xf0e0d0b,0x13121110,0x18171614,0x1d1b1a19,0x21201f1e,
	0x26242322,0x2a292827,0x2e2d2c2b,0x3231302f,0x37353433,0x3c3a3938,0x3f3e3e3d,0x3f3f3f3f,

	0x3020100,0x7060504,0xb0a0908,0xf0e0d0c,0x13121110,0x17161514,0x1b1a1918,0x1f1e1d1c,
	0x23222120,0x27262524,0x2b2a2928,0x2f2e2d2c,0x33323130,0x37363534,0x3b3a3938,0x3f3e3d3c,

	0x3020100,0x7060504,0xb0a0908,0xf0e0d0c,0x13121110,0x17161514,0x1b1a1918,0x1f1e1d1c,
	0x23222120,0x27262524,0x2b2a2928,0x2f2e2d2c,0x33323130,0x37363534,0x3b3a3938,0x3f3e3d3c,

	0x3020100,0x7060504,0xb0a0908,0xf0e0d0c,0x13121110,0x17161514,0x1b1a1918,0x1f1e1d1c,
	0x23222120,0x27262524,0x2b2a2928,0x2f2e2d2c,0x33323130,0x37363534,0x3b3a3938,0x3f3e3d3c,

	0x3020100,0x7060504,0xb0a0908,0xf0e0d0c,0x13121110,0x17161514,0x1b1a1918,0x1f1e1d1c,
	0x23222120,0x27262524,0x2b2a2928,0x2f2e2d2c,0x33323130,0x37363534,0x3b3a3938,0x3f3e3d3c,

	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,


	0,
	0x101,0,0x100,0,
	0x20,0x10,0x8,0x4,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,

	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,
};


#endif

/* 防抖*/
#define FILTER_POINT
#ifdef FILTER_POINT
#define FILTER_MAX	9
#endif

#endif
