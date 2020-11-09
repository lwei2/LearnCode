#sg3_utils
向特定SCSI设备发送SCSI命令步骤：
	1.打开SCSI通用设备文件。
	2.获取SCSI设备文件描述符。
	3.准备SCSI命令。
	4.调用ioctl函数执行SCSI命令。
	5.关闭设备文件。

typedef struct sg_io_hdr
{
    int interface_id;               /* [i] 'S' (required) */
    int dxfer_direction;            /* [i] */
    unsigned char cmd_len;          /* [i] */
    unsigned char mx_sb_len;        /* [i] */
    unsigned short iovec_count;     /* [i] */
    unsigned int dxfer_len;         /* [i] */
    void * dxferp;                  /* [i], [*io] */
    unsigned char * cmdp;           /* [i], [*i]  */
    unsigned char * sbp;            /* [i], [*o]  */
    unsigned int timeout;           /* [i] unit: millisecs */
    unsigned int flags;             /* [i] */
    int pack_id;                    /* [i->o] */
    void * usr_ptr;                 /* [i->o] */
    unsigned char status;           /* [o] */
    unsigned char masked_status;    /* [o] */
    unsigned char msg_status;       /* [o] */
    unsigned char sb_len_wr;        /* [o] */
    unsigned short host_status;     /* [o] */
    unsigned short driver_status;   /* [o] */
    int resid;                      /* [o] */
    unsigned int duration;          /* [o] */
    unsigned int info;              /* [o] */
} sg_io_hdr_t;  /* 64 bytes long (on i386) */
interface_id：一般应该设置为 S。
dxfer_direction：用于确定数据传输的方向；常常使用以下值之一：
SG_DXFER_NONE：不需要传输数据。比如 SCSI Test Unit Ready 命令。
SG_DXFER_TO_DEV：将数据传输到设备。使用 SCSI WRITE 命令。
SG_DXFER_FROM_DEV：从设备输出数据。使用 SCSI READ 命令。
SG_DXFER_TO_FROM_DEV：双向传输数据。
SG_DXFER_UNKNOWN：数据的传输方向未知。
cmd_len：指向 SCSI 命令的 cmdp 的字节长度。
mx_sb_len：当 sense_buffer 为输出时，可以写回到 sbp 的最大大小。
dxfer_len：数据传输的用户内存的长度。
dxferp：指向数据传输时长度至少为 dxfer_len 字节的用户内存的指针。
cmdp：指向将要执行的 SCSI 命令的指针。
sbp：缓冲检测指针。
timeout：用于使特定命令超时。
status：由 SCSI 标准定义的 SCSI 状态字节。