//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LivePlayer;

@protocol LivePlayerDelegate <NSObject>

@optional
- (void)livePlayer:(LivePlayer *)arg1 playbackStateDidChange:(long long)arg2;
- (void)livePlayer:(LivePlayer *)arg1 loadStateDidChange:(unsigned long long)arg2;
@end

