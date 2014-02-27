#ifndef SENSOR_H
#define SENSOR_H

/* Use 'n' as magic number */
#define SENSOR_IOC_M			's'

/* IOCTLs for sensor*/
#define SENSOR_IOC_CALIBRATE _IO(SENSOR_IOC_M, 0x01)

#define CALI_NUM 4
#define SAMPLE_NUM 50


struct cali{
	int xoffset_p;
	int yoffset_p;
	int zoffset_p;
	int xoffset_n;
	int yoffset_n;
	int zoffset_n;

	int valid;
};

struct sample
{
    s16 x;
    s16 y;
    s16 z;
};



#endif
