//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface NetworkFlashSetting : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasDuration;
    _Bool _hasLoop;
    _Bool _hasConnAliveTime;
    int _duration;
    int _loop;
    int _connAliveTime;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) int connAliveTime; // @synthesize connAliveTime=_connAliveTime;
@property(nonatomic) int loop; // @synthesize loop=_loop;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(readonly) _Bool hasConnAliveTime; // @synthesize hasConnAliveTime=_hasConnAliveTime;
@property(readonly) _Bool hasLoop; // @synthesize hasLoop=_hasLoop;
@property(readonly) _Bool hasDuration; // @synthesize hasDuration=_hasDuration;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
