//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMTPFunStorage : NSObject
{
    _Bool _isZstd;
    _Bool _isIpAndDns;
    _Bool _isTcpInfo;
    _Bool _isTreeStore;
    _Bool _isBuryPoint;
    _Bool _isQosLevel;
    _Bool _isTraffic;
    _Bool _isABTest;
    _Bool _isColdStart;
    _Bool _isBackgroundFetch;
    _Bool _isReportMsg;
    _Bool _isUseExceptionView;
    _Bool _useNotAvailbleLogic;
    _Bool _useStatusBar;
    _Bool _massProxyTimerInMain;
    _Bool _aggressivFreshNetInterface;
    _Bool _isForgroundCompensate;
    _Bool _isMtlsError;
    _Bool _ignoreNetStatus;
    _Bool _crashSwitchOpen;
    _Bool _hpackSwitch;
    long long _notAvailbleDuration;
    long long _notAvailbleCount;
    long long _massNotAvailbleDuration;
    long long _massNotAvailbleCount;
    long long _zstdRpcMaxSize;
    long long _hpackErrMaxCount;
}

+ (id)shareInstance;
@property _Bool hpackSwitch; // @synthesize hpackSwitch=_hpackSwitch;
@property long long hpackErrMaxCount; // @synthesize hpackErrMaxCount=_hpackErrMaxCount;
@property _Bool crashSwitchOpen; // @synthesize crashSwitchOpen=_crashSwitchOpen;
@property _Bool ignoreNetStatus; // @synthesize ignoreNetStatus=_ignoreNetStatus;
@property long long zstdRpcMaxSize; // @synthesize zstdRpcMaxSize=_zstdRpcMaxSize;
@property _Bool isMtlsError; // @synthesize isMtlsError=_isMtlsError;
@property _Bool isForgroundCompensate; // @synthesize isForgroundCompensate=_isForgroundCompensate;
@property _Bool aggressivFreshNetInterface; // @synthesize aggressivFreshNetInterface=_aggressivFreshNetInterface;
@property _Bool massProxyTimerInMain; // @synthesize massProxyTimerInMain=_massProxyTimerInMain;
@property _Bool useStatusBar; // @synthesize useStatusBar=_useStatusBar;
@property long long massNotAvailbleCount; // @synthesize massNotAvailbleCount=_massNotAvailbleCount;
@property long long massNotAvailbleDuration; // @synthesize massNotAvailbleDuration=_massNotAvailbleDuration;
@property long long notAvailbleCount; // @synthesize notAvailbleCount=_notAvailbleCount;
@property long long notAvailbleDuration; // @synthesize notAvailbleDuration=_notAvailbleDuration;
@property _Bool useNotAvailbleLogic; // @synthesize useNotAvailbleLogic=_useNotAvailbleLogic;
@property _Bool isUseExceptionView; // @synthesize isUseExceptionView=_isUseExceptionView;
@property _Bool isReportMsg; // @synthesize isReportMsg=_isReportMsg;
@property _Bool isBackgroundFetch; // @synthesize isBackgroundFetch=_isBackgroundFetch;
@property _Bool isColdStart; // @synthesize isColdStart=_isColdStart;
@property _Bool isABTest; // @synthesize isABTest=_isABTest;
@property _Bool isTraffic; // @synthesize isTraffic=_isTraffic;
@property _Bool isQosLevel; // @synthesize isQosLevel=_isQosLevel;
@property _Bool isBuryPoint; // @synthesize isBuryPoint=_isBuryPoint;
@property _Bool isTreeStore; // @synthesize isTreeStore=_isTreeStore;
@property _Bool isTcpInfo; // @synthesize isTcpInfo=_isTcpInfo;
@property _Bool isIpAndDns; // @synthesize isIpAndDns=_isIpAndDns;
@property _Bool isZstd; // @synthesize isZstd=_isZstd;
- (void)storeNewFunDictToDisk:(id)arg1;
- (id)getNewFunDictFromDisk;
- (id)init;

@end
