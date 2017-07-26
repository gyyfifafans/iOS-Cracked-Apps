//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DTService.h"

@class NSString;

@interface EmotionManagerService : NSObject <DTService>
{
}

+ (_Bool)emotionMakerIsEnabled;
+ (_Bool)emotionHasNewFlag;
+ (void)removeEmotionHasNewFlag;
- (void)syncFavoriteMessage:(id)arg1;
- (void)syncMessage:(id)arg1;
- (void)loginDidFinish:(id)arg1;
- (void)willDestroy;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
