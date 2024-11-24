// add in the GC packets section with next free value, in my case its 189

#ifdef ENABLE_NOTIFICATION_SYSTEM
	HEADER_GC_NOTIFICATION = 189,
#endif

// find:
#pragma pack(pop)

// add above:
#ifdef ENABLE_NOTIFICATION_SYSTEM
enum ENotification
{
	NOTIFICATION_CATEGORY_SPECIAL_ITEM_EXPIRED = 1,
};

typedef struct SPacketGCNotification
{
	BYTE byHeader;
	BYTE byCategory;
	DWORD dwValue;
	DWORD dwAdditionalValue;
} TPacketGCNotification;
#endif