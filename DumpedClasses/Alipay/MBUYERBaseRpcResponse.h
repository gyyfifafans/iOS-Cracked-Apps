//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MBUYERToString.h"

@class NSDictionary, NSString;

@interface MBUYERBaseRpcResponse : MBUYERToString
{
    _Bool _success;
    NSString *_errorCode;
    NSString *_errorMsg;
    NSString *_sessionId;
    NSString *_errorDesc;
    NSDictionary *_data;
}

+ (Class)dataElementClass;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *errorDesc; // @synthesize errorDesc=_errorDesc;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end
