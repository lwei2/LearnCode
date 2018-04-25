struct event_base *event_global_current_base_ = NULL;
#define current_base event_global_current_base_
struct event_base *event_init(void)
{
	struct event_base *base = event_base_new_with_config(NULL);
	if(base == NULL)
	{
		event_errx(1, "%s: Uable to construct event_base", __func__);
		base = NULL;
	}
	current_base = base;
	return (base);
}
