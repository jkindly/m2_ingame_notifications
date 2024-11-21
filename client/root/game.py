# add at the end of the file:
    if app.ENABLE_NOTIFICATION_SYSTEM:
        def BINARY_SendNotification(self, category, value, additionalValue):
            if self.interface:
                self.interface.SendNotification(category, value, additionalValue)