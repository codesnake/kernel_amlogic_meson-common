#ifndef _GSLX680_H_
#define _GSLX680_H_


//#define SCREEN_MAX_X 		1024
//#define SCREEN_MAX_Y 		600

/*修正边缘坐标不准的问题，一般情况下不要打开这个宏，
除非对边缘要求比较准，配置文件里要把到边率设成0%*/
#define STRETCH_FRAME
#ifdef STRETCH_FRAME
#define CTP_MAX_X 		SCREEN_MAX_Y
#define CTP_MAX_Y 		SCREEN_MAX_X

#define GSLX680_I2C_NAME 	"gslx680"

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

/* 防抖*/
#define FILTER_POINT
#ifdef FILTER_POINT
#define FILTER_MAX	15
#endif

#endif
