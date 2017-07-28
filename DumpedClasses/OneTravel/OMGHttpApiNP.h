//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableArray, OMGNetworkObservers;

@interface OMGHttpApiNP : NSObject
{
    _Bool _open;
    _Bool _allHost;
    NSMutableArray *_urlPathArray;
    NSMutableArray *_urlPathSampleArray;
    OMGNetworkObservers *_observer;
    unsigned long long _todayRequestNum;
    unsigned long long _maxRequestNum;
    NSDate *_date;
}

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) unsigned long long maxRequestNum; // @synthesize maxRequestNum=_maxRequestNum;
@property(nonatomic) unsigned long long todayRequestNum; // @synthesize todayRequestNum=_todayRequestNum;
@property(retain, nonatomic) OMGNetworkObservers *observer; // @synthesize observer=_observer;
@property(retain, nonatomic) NSMutableArray *urlPathSampleArray; // @synthesize urlPathSampleArray=_urlPathSampleArray;
@property(retain, nonatomic) NSMutableArray *urlPathArray; // @synthesize urlPathArray=_urlPathArray;
@property(nonatomic, getter=IsAllHost, setter=SetAllHost:) _Bool allHost; // @synthesize allHost=_allHost;
@property(nonatomic, getter=IsOpen, setter=SetOpen:) _Bool open; // @synthesize open=_open;
- (void).cxx_destruct;
- (void)clean;
- (void)dealloc;
- (_Bool)isWriteUrl:(id)arg1;
- (void)HttpApiNP:(id)arg1 With:(id)arg2;
- (void)HttpApiNP:(id)arg1;
- (id)init;

@end
