//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@protocol QQAmrRecorderDelegate <NSObject>

@optional
- (void)onRecordBeInterrupt;
- (void)onRecordFinishData:(NSData *)arg1;
- (void)onTimeOut;
- (void)onRecordReady;
- (void)onRecordData:(NSData *)arg1;
- (void)onRecordFinish:(NSString *)arg1;
- (void)onRecordError:(int)arg1;
@end

