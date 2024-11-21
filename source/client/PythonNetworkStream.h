// find:
bool RecvGuild();

// add below:
#ifdef ENABLE_NOTIFICATION_SYSTEM
		bool RecvNotification();
#endif