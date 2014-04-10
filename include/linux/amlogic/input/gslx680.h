#ifndef _GSLX680_H_
#define _GSLX680_H_


//#define SCREEN_MAX_X 		1024
//#define SCREEN_MAX_Y 		600

/*������Ե���겻׼�����⣬һ������²�Ҫ������꣬
���ǶԱ�ԵҪ��Ƚ�׼�������ļ���Ҫ�ѵ��������0%*/
#define STRETCH_FRAME
#ifdef STRETCH_FRAME
#define CTP_MAX_X 		SCREEN_MAX_Y
#define CTP_MAX_Y 		SCREEN_MAX_X

#define GSLX680_I2C_NAME 	"gslx680"

#define X_STRETCH_MAX	(CTP_MAX_X/10)	/*X���� ����ķֱ��ʣ�һ����һ��ͨ���ķֱ���*/
#define Y_STRETCH_MAX	(CTP_MAX_Y/15)	/*Y���� ����ķֱ��ʣ�һ����һ��ͨ���ķֱ���*/
#define XL_RATIO_1	25	/*X���� �������ķֱ��ʵ�һ���������ٷֱ�*/
#define XL_RATIO_2	45	/*X���� �������ķֱ��ʵڶ����������ٷֱ�*/
#define XR_RATIO_1	35	/*X���� �ұ�����ķֱ��ʵ�һ���������ٷֱ�*/
#define XR_RATIO_2	55	/*X���� �ұ�����ķֱ��ʵڶ����������ٷֱ�*/
#define YL_RATIO_1	30	/*Y���� �������ķֱ��ʵ�һ���������ٷֱ�*/
#define YL_RATIO_2	45	/*Y���� �������ķֱ��ʵڶ����������ٷֱ�*/
#define YR_RATIO_1	40	/*Y���� �ұ�����ķֱ��ʵ�һ���������ٷֱ�*/
#define YR_RATIO_2	65	/*Y���� �ұ�����ķֱ��ʵڶ����������ٷֱ�*/

#define X_STRETCH_CUST	(CTP_MAX_X/10)	/*X���� �Զ�������ķֱ��ʣ�һ����һ��ͨ���ķֱ���*/
#define Y_STRETCH_CUST	(CTP_MAX_Y/15)	/*Y���� �Զ�������ķֱ��ʣ�һ����һ��ͨ���ķֱ���*/
#define X_RATIO_CUST	10	/*X���� �Զ�������ķֱ��ʱ������ٷֱ�*/
#define Y_RATIO_CUST	10	/*Y���� �Զ�������ķֱ��ʱ������ٷֱ�*/
#endif

/* ����*/
#define FILTER_POINT
#ifdef FILTER_POINT
#define FILTER_MAX	15
#endif

#endif
