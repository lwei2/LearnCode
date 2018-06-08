

struct event_base *event_base_new(void)
{
	struct event_base *base = NULL;
	struct event_config *cfg = event_config_new();
	if(cfg)
	{
		base = event_base_new_with_config(cfg);
		event_config_free(cfg);
	}
	return base;
}