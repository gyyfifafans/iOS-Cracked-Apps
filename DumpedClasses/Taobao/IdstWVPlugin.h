//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVDynamicHandler.h"

@class IdstRecoderManager;

@interface IdstWVPlugin : WVDynamicHandler
{
    IdstRecoderManager *_idstRecordManager;
}

+ (unsigned long long)instanceScope;
@property(retain, nonatomic) IdstRecoderManager *idstRecordManager; // @synthesize idstRecordManager=_idstRecordManager;
- (void).cxx_destruct;
- (void)stopACRListening:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)startACRListening:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)startRecord:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

