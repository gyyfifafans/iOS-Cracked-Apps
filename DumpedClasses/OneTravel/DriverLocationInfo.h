//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface DriverLocationInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int channel; // @dynamic channel;
@property(retain, nonatomic) NSMutableArray *coordsArray; // @dynamic coordsArray;
@property(readonly, nonatomic) unsigned long long coordsArray_Count; // @dynamic coordsArray_Count;
@property(nonatomic) int debugStatus; // @dynamic debugStatus;
@property(copy, nonatomic) NSString *debugStatusDetail; // @dynamic debugStatusDetail;
@property(nonatomic) long long dirverId; // @dynamic dirverId;
@property(nonatomic) _Bool hasChannel; // @dynamic hasChannel;
@property(nonatomic) _Bool hasDebugStatus; // @dynamic hasDebugStatus;
@property(nonatomic) _Bool hasDebugStatusDetail; // @dynamic hasDebugStatusDetail;
@property(nonatomic) _Bool hasDirverId; // @dynamic hasDirverId;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) int status; // @dynamic status;
@property(nonatomic) int type; // @dynamic type;

@end

