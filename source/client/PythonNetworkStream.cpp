// find:
Set(HEADER_GC_LOGIN_KEY, CNetworkPacketHeaderMap::TPacketType(sizeof(TPacketGCLoginKey), STATIC_SIZE_PACKET));

// add below:
#ifdef ENABLE_NOTIFICATION_SYSTEM
			Set(HEADER_GC_NOTIFICATION, CNetworkPacketHeaderMap::TPacketType(sizeof(TPacketGCNotification), STATIC_SIZE_PACKET));
#endif