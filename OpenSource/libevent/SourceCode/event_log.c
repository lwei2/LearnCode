#define EVENT_LOG_DEBUG		0
#define EVENT_LOG_MSG		1
#define EVENT_LOG_WARN		2
#define EVENT_LOG_ERR		3

static event_log_cb log_fn = NULL;

void event_set_log_callback(event_log_cb cb)
{
	log_fn = cb;
}

static void event_log(int severity, const char *msg)
{
	if(log_fn)
		log_fn(severity,msg);
	else
	{
		const char *severity_str;
		switch(severity)
		{
			case EVENT_LOG_DEBUG:
				severity_str = "debug";
				break;
			case EVENT_LOG_MSG:
				severity_str = "msg";
				break;
			case EVENT_LOG_WARN:
				severity_str = "warn";
				break;
			case EVENT_LOG_ERR:
				severity_str = "err";
				break;
			default:
				severity_str = "???";
				break;
		}
		(void)fprintf(stderr, "[%s] %s\n", severity_str, msg);
	}	
}
