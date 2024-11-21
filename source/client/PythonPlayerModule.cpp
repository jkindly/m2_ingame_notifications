// add at the end of initPlayer() function:

#ifdef ENABLE_NOTIFICATION_SYSTEM
	PyModule_AddIntConstant(poModule, "NOTIFICATION_CATEGORY_SPECIAL_ITEM_EXPIRED", ENotification::NOTIFICATION_CATEGORY_SPECIAL_ITEM_EXPIRED);
#endif