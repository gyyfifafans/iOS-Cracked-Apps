//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DDIMNotificationServer : NSObject
{
}

+ (id)notificationServer;
- (void)postIMNewTTSMessage:(id)arg1;
- (void)postIMSessionStatusChanged:(id)arg1;
- (void)postIMMessageViewIsViewLoaded:(id)arg1;
- (void)postIMSharedPOIMessage:(id)arg1;
- (void)postIMChannelMessage:(id)arg1;
- (void)postAllNewMessageNotificaiton:(id)arg1 withMessageInfo:(id)arg2;

@end
