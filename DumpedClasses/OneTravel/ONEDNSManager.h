//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, ONEDNSCache;

@interface ONEDNSManager : NSObject
{
    NSOperationQueue *_dnsTaskCommonQueue;
    id <ONEDNSQueryProtocol> _api;
    ONEDNSCache *_cache;
}

+ (id)sharedInstance;
+ (_Bool)isAllowHTTPDNSOnProxy;
+ (unsigned long long)getHTTPDNSSwitchType;
+ (_Bool)isEnabled;
@property(retain, nonatomic) ONEDNSCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) id <ONEDNSQueryProtocol> api; // @synthesize api=_api;
@property(retain, nonatomic) NSOperationQueue *dnsTaskCommonQueue; // @synthesize dnsTaskCommonQueue=_dnsTaskCommonQueue;
- (void).cxx_destruct;
- (void)updateHost:(id)arg1 records:(id)arg2;
- (id)hostWithName:(id)arg1;
- (id)currentRecords;
- (void)reportRequestIsSuccess:(_Bool)arg1 withURL:(id)arg2;
- (id)resolveHostToIpWithURL:(id)arg1;
- (void)httpdnsRequestResponseInvalid:(id)arg1;
- (void)httpdnsInitilized;
- (void)addCommonDNSParseOperation:(id)arg1;
- (void)fetchDataFromServer;
- (id)localDefaultHosts;
- (void)loadDataFromLocal;
- (void)start;
- (void)dealloc;
- (void)p_initlize;
- (id)init;

@end
