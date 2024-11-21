// add at the bottom of the file:
#ifdef ENABLE_NOTIFICATION_SYSTEM
ACMD(do_test_notification)
{
	char arg1[256], arg2[256], arg3[256];
	const char* line;

	line = two_arguments(argument, arg1, sizeof(arg1), arg2, sizeof(arg2));
	one_argument(line, arg3, sizeof(arg3));

	if (!*arg1 || !*arg2 || !isdigit(*arg1) || !isdigit(*arg2))
	{
		ch->ChatPacket(CHAT_TYPE_INFO, "Usage: test_notification <category> <value> <additional_value>");
		return;
	}

	BYTE byCategory = 0;
	DWORD dwValue = 0;
	DWORD dwAdditionalValue = 0;

	str_to_number(byCategory, arg1);
	str_to_number(dwValue, arg2);

	if (*arg1)
	{
		str_to_number(dwAdditionalValue, arg3);
	}

	ch->SendNotification(byCategory, dwValue, dwAdditionalValue);
}
#endif