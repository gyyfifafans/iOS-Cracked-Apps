//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray<FMCategory>, NSString;

@interface FMCategoryList : NSObject
{
    NSArray<FMCategory> *_items;
    unsigned long long _status;
    NSString *_errorMsg;
}

@property(copy, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSArray<FMCategory> *items; // @synthesize items=_items;
- (void).cxx_destruct;

@end

