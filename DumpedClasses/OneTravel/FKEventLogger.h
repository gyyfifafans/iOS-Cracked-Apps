//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface FKEventLogger : NSObject
{
    id <FKEventLoggerDelegate> _delegate;
    NSMutableDictionary *_logDict;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *logDict; // @synthesize logDict=_logDict;
@property(nonatomic) __weak id <FKEventLoggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addEventLog:(id)arg1 error:(id)arg2;
- (id)init;

@end
