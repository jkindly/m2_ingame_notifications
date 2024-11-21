// add at the end of initapp() function:
#ifdef ENABLE_NOTIFICATION_SYSTEM
	PyModule_AddIntConstant(poModule, "ENABLE_NOTIFICATION_SYSTEM", 1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_NOTIFICATION_SYSTEM", 0);
#endif