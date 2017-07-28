//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GtExtReachability;

@interface GtExtWifiClient : NSObject
{
    GtExtReachability *internetReach_;
    long long _netWorkStatus;
}

@property(readonly, nonatomic) long long netWorkStatus; // @synthesize netWorkStatus=_netWorkStatus;
- (void).cxx_destruct;
- (long long)getCurrentNetworkStatus;
- (void)updateInterfaceWithReachability:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (id)fetchCurrentConnectWifiInfo;
- (id)fetchSSIDInfo;
- (void)dealloc;
- (id)init;

@end
