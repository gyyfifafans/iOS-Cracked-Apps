//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMailComposeViewControllerDelegate.h"

@class NSDictionary, NSString;

@interface TTMailShare : NSObject <MFMailComposeViewControllerDelegate>
{
    id <TTMailShareDelegate> _delegate;
    NSDictionary *_callbackUserInfo;
}

+ (id)sharedMailShare;
@property(copy, nonatomic) NSDictionary *callbackUserInfo; // @synthesize callbackUserInfo=_callbackUserInfo;
@property(nonatomic) __weak id <TTMailShareDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)callbackWithError:(id)arg1;
- (_Bool)isAvailableWithNotifyError:(_Bool)arg1;
- (void)sendMailWithSubject:(id)arg1 toRecipients:(id)arg2 ccRecipients:(id)arg3 bcRecipients:(id)arg4 messageBody:(id)arg5 isHTML:(_Bool)arg6 addAttachmentData:(id)arg7 mimeType:(id)arg8 fileName:(id)arg9 inViewController:(id)arg10 withCustomCallbackUserInfo:(id)arg11;
- (_Bool)isAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
