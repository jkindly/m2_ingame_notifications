// find:
		if (pkItem->GetSocket(ITEM_SOCKET_UNIQUE_REMAIN_TIME) <= cur)
		{
			
// add below:
#ifdef ENABLE_NOTIFICATION_SYSTEM
			if (pkItem)
			{
				if (auto const owner = pkItem->GetOwner())
				{
					owner->SendNotification(ENotification::NOTIFICATION_CATEGORY_SPECIAL_ITEM_EXPIRED, pkItem->GetVnum());
				}
			}
#endif

// find:
ITEM_MANAGER::instance().RemoveItem(pkItem, "TIMER_BASED_ON_WEAR_EXPIRE");

// add above:
#ifdef ENABLE_NOTIFICATION_SYSTEM
			if (pkItem)
			{
				if (auto const owner = pkItem->GetOwner())
				{
					owner->SendNotification(ENotification::NOTIFICATION_CATEGORY_SPECIAL_ITEM_EXPIRED, pkItem->GetVnum());
				}
			}
#endif

// find:
ITEM_MANAGER::instance().RemoveItem(item, "REAL_TIME_EXPIRE");

// add above:
#ifdef ENABLE_NOTIFICATION_SYSTEM
		if (item)
		{
			if (auto const owner = item->GetOwner())
			{
				owner->SendNotification(ENotification::NOTIFICATION_CATEGORY_SPECIAL_ITEM_EXPIRED, item->GetVnum());
			}
		}
#endif