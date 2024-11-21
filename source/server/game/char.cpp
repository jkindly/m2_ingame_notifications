// add at the bottom of the file:
#ifdef ENABLE_NOTIFICATION_SYSTEM
void CHARACTER::SendNotification(BYTE byCategory, DWORD dwValue, DWORD dwAdditionalValue)
{
	if (!GetDesc())
	{
		return;
	}

	TPacketGCNotification packet{};
	packet.byHeader = HEADER_GC_NOTIFICATION;
	packet.byCategory = byCategory;
	packet.dwValue = dwValue;
	packet.dwAdditionalValue = dwAdditionalValue;

	GetDesc()->Packet(&packet, sizeof(packet));
}
#endif