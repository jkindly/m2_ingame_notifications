// find:
			default:
				ret = RecvDefaultPacket(header);
				break;
				
// add above:
#ifdef ENABLE_NOTIFICATION_SYSTEM
			case HEADER_GC_NOTIFICATION:
				ret = RecvNotification();
				break;
#endif

// add at the bottom of the file:
#ifdef ENABLE_NOTIFICATION_SYSTEM
bool CPythonNetworkStream::RecvNotification()
{
	TPacketGCNotification packet;
	if (!Recv(sizeof(packet), &packet))
		return false;

	PyCallClassMemberFunc(m_apoPhaseWnd[PHASE_WINDOW_GAME], "BINARY_SendNotification", Py_BuildValue("(iii)", packet.byCategory, packet.dwValue, packet.dwAdditionalValue));

	return true;
}
#endif