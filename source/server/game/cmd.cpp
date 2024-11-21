// find:
struct command_info cmd_info[] =

// add above:
#ifdef ENABLE_NOTIFICATION_SYSTEM
ACMD(do_test_notification);
#endif

// find:
{ "\n",		NULL,			0,			POS_DEAD,	GM_IMPLEMENTOR	}

// add above:
#ifdef ENABLE_NOTIFICATION_SYSTEM
	{ "test_notification",		do_test_notification,		0,		POS_DEAD,	GM_IMPLEMENTOR },
#endif