//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface MSOADynamicServieResult : NSObject
{
    _Bool _success;
    NSDictionary *_resultData;
}

@property(retain, nonatomic) NSDictionary *resultData; // @synthesize resultData=_resultData;
@property(nonatomic, getter=isSuccess) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)initWithSuccess:(_Bool)arg1 resultData:(id)arg2;

@end

