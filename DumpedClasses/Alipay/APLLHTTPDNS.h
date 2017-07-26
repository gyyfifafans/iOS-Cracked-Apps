//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LLHTTPDNSInterface.h"

@class NSString;

@interface APLLHTTPDNS : NSObject <LLHTTPDNSInterface>
{
    _Bool _httpDNSOpen;
    id <LLHTTPDNSInterface> _sharedHTTPDNS;
}

+ (void)setLLHTTPDNS:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) id <LLHTTPDNSInterface> sharedHTTPDNS; // @synthesize sharedHTTPDNS=_sharedHTTPDNS;
@property(nonatomic) _Bool httpDNSOpen; // @synthesize httpDNSOpen=_httpDNSOpen;
- (void).cxx_destruct;
- (_Bool)netCardIpV6Only;
- (id)getIpV6OxcStringFromPointSepIpV4:(id)arg1;
- (id)getOriginByHost:(id)arg1;
- (void)setError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
