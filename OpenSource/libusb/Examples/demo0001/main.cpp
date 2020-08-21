
#include "common.h"
#define BLOCK_LEN 512
#define SENSE_LEN 1024


void show_vendor(struct sg_io_hdr *hdr)
{
	unsigned char *buffer = (unsigned char*)hdr->dxferp;
	int i;
	printf("vendor id:");
	for(i = 8; i < 16; i++)
			putchar(buffer[i]);
	putchar('\n');
}

void show_product(struct sg_io_hdr *hdr)
{
	unsigned char *buffer = (unsigned char*)hdr->dxferp;
	int i;
	printf("product id:");
	for(i = 16; i < 32; i++)
		putchar(buffer[i]);
	putchar('\n');

}

void show_product_rev(struct sg_io_hdr *hdr)
{
	unsigned char *buffer = (unsigned char*)hdr->dxferp;
	int i;
	printf("product rev:");
	for(i = 32; i < 36; i++)
		putchar(buffer[i]);
	putchar('\n');
}


unsigned char sense_buffer[SENSE_LEN];
unsigned char data_buffer[BLOCK_LEN*256];
void test_execute_Inquiry(char *path, int evpd, int page_code)
{
	struct sg_io_hdr *p_hdr = init_io_hdr();
	set_xfer_data(p_hdr, data_buffer, BLOCK_LEN*256);
	set_sense_data(p_hdr, sense_buffer,SENSE_LEN);
	int status = 0;
	int fd = open(path,O_RDWR);
	if(fd > 0)
	{
			status = execute_Inquiry(fd, page_code,evpd, p_hdr);
			printf("the return status is %d\n", status);
			if(status != 0)
			{
				//show_sense_buffer(p_hdr);
				printf("status:%d\n",status);
			}
			else
			{
				show_vendor(p_hdr);
				show_product(p_hdr);
				show_product_rev(p_hdr);
			}
	}
}
int main(int argc, char **argv)
{
	test_execute_Inquiry(argv[1], 0, 0);	
	return EXIT_SUCCESS;
}
