#ifndef _COMMON_H_
#define _COMMON_H_

#include <sys/ioctl.h>
#include <scsi/sg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

struct sg_io_hdr *init_io_hdr();
void destroy_io_hdr(struct sg_io_hdr *);
void set_xfer_data(struct sg_io_hdr *,void *, unsigned int);
void set_sense_data(struct sg_io_hdr *p_hdr, unsigned char *, unsigned int);
int execute_Inquiry(int fd, int page_code, int evqd, struct sg_io_hdr *p_hdr);


#endif //_COMMON_H_
