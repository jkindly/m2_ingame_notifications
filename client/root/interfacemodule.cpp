# add to the imports:
if app.ENABLE_NOTIFICATION_SYSTEM:
	import uiNotification
	
# find:
event.SetInterfaceWindow(self)

# add above:
if app.ENABLE_NOTIFICATION_SYSTEM:
	self.wndNotification = None
	
# find:
self.wndChatLog = wndChatLog

# add below:
if app.ENABLE_NOTIFICATION_SYSTEM:
	self.wndNotification = uiNotification.NotificationWindow()
	
# find:
if self.wndChatLog:
	self.wndChatLog.Destroy()

# add below:
if app.ENABLE_NOTIFICATION_SYSTEM:
	if self.wndNotification:
		self.wndNotification.Destroy()
		
# find:
del self.wndItemSelect

# add below:

if app.ENABLE_NOTIFICATION_SYSTEM:
	if self.wndNotification:
		del self.wndNotification

# find:
if self.wndExpandedTaskBar:
	self.wndExpandedTaskBar.Hide()

# add below:			
if app.ENABLE_NOTIFICATION_SYSTEM:
	if self.wndNotification:
		self.wndNotification.Hide()
		
# find:
if __name__ == "__main__":

# add above:
	if app.ENABLE_NOTIFICATION_SYSTEM:
		def SendNotification(self, category, value, additionalValue):
			if self.wndNotification:
				self.wndNotification.AddToQueue(category, value, additionalValue)