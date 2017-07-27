//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BlueTaskThread, FoomParameter, NSTimer;

@interface MemoryUploadCenter : NSObject
{
    BlueTaskThread *_thread;
    FoomParameter *_parameter;
    double _freeMemory;
    double _residentMemory;
    double _heapMemory;
    double _maxMemory;
    double _maxHeapMemory;
    double _singleLoginMaxMemory;
    _Bool _hasUpLoadLastData;
    _Bool _hasUpdateUin;
    NSTimer *_watchDogTimer;
    double _fristLaunchTime;
    double _firstOOMTime;
}

+ (id)getInstance;
- (double)appMaxMemory;
- (double)appUsedMemory;
- (double)freeMemory;
- (void)appReceiveMemoryWarning;
- (void)appWillTerminate;
- (void)appResignActive;
- (void)appBecomeActive;
- (void)appEnterForgound;
- (void)appEnterBackground;
- (void)appFinishLauch;
- (id)singleLoginMaxMemoryDir;
- (id)readLastMaxHeapMemory;
- (void)saveLastMaxHeapMemory;
- (void)saveLastSingleLoginMaxMemory;
- (double)getThreshold;
- (void)uploadLastSingleLoginMaxMemory;
- (void)clearWatchDogFlag;
- (void)handleRqdCrash;
- (id)FoomParameterDir;
- (void)saveFoomParameter;
- (char *)getAppState:(int)arg1;
- (char *)getCrashName:(int)arg1;
- (void)uploadToRDM:(id)arg1;
- (void)uploadFoomCrash;
- (void)updateMemory;
- (void)dealloc;
- (void)doUploadTask;
- (void)initMemoryWindow;
- (id)init;

@end
