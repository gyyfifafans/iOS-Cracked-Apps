//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTTelephonyNetworkInfo;

@interface LVNetworkStatus : NSObject
{
    int _currentNetworkStatus;
    int _preNetworkStatus;
    struct __SCNetworkReachability *_reachabilityRef;
    CTTelephonyNetworkInfo *netInfo;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (int)_networkStatusForReachabilityFlags:(unsigned int)arg1;
- (int)currentNetworkStatusForiOS7:(int)arg1;
- (_Bool)checkInternetConnection;
- (int)_reachabilityStatus;
- (id)currentNetworkStatusString;
- (int)preNetworkStatus;
- (int)currentNetworkStatus;
- (_Bool)_startNotifier;
- (id)init;

@end
