//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface FMMtopRequestModel : NSObject
{
    _Bool _isNeedEcode;
    _Bool _isEnableWUA;
    _Bool _usePost;
    NSString *_apiName;
    NSString *_apiVersion;
    Class _returnClass;
    NSDictionary *_bizParameter;
    unsigned long long _sessionExpiredOption;
    unsigned long long _cachePolicy;
    double _cacheTime;
}

@property(nonatomic) double cacheTime; // @synthesize cacheTime=_cacheTime;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(nonatomic) _Bool usePost; // @synthesize usePost=_usePost;
@property(nonatomic) unsigned long long sessionExpiredOption; // @synthesize sessionExpiredOption=_sessionExpiredOption;
@property(retain, nonatomic) NSDictionary *bizParameter; // @synthesize bizParameter=_bizParameter;
@property(nonatomic) _Bool isEnableWUA; // @synthesize isEnableWUA=_isEnableWUA;
@property(copy, nonatomic) Class returnClass; // @synthesize returnClass=_returnClass;
@property(nonatomic) _Bool isNeedEcode; // @synthesize isNeedEcode=_isNeedEcode;
@property(copy, nonatomic) NSString *apiVersion; // @synthesize apiVersion=_apiVersion;
@property(copy, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
- (void).cxx_destruct;
- (id)init;

@end
