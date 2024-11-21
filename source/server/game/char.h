// find:
};

ESex GET_SEX(LPCHARACTER ch);

// add above:
#ifdef ENABLE_NOTIFICATION_SYSTEM
	public:
		void SendNotification(BYTE byCategory, DWORD dwValue, DWORD dwAdditionalValue = 0);
#endif