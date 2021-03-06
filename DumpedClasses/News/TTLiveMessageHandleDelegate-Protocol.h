//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TTLiveMessage, UIView;

@protocol TTLiveMessageHandleDelegate <NSObject>

@optional
- (void)ttLiveMessageSendingDidCanceled:(TTLiveMessage *)arg1;
- (void)ttLiveMessageActionBubbleDidDisplayed:(TTLiveMessage *)arg1;
- (void)ttLiveHandleMessageAvatarTappedAction:(TTLiveMessage *)arg1;
- (void)ttLiveHandleMessageResendAction:(TTLiveMessage *)arg1;
- (void)ttLiveHandleMessageADLinkTappedAction:(TTLiveMessage *)arg1;
- (void)ttLiveHandleMessageImageTappedAction:(TTLiveMessage *)arg1 convertedImageFrame:(struct CGRect)arg2 targetView:(UIView *)arg3;
- (void)ttLiveHandleMessageSharedAction:(TTLiveMessage *)arg1;
- (void)ttLiveHandleMessageReplyedAction:(TTLiveMessage *)arg1;
@end

