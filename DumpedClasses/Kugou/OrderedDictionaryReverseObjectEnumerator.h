//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class NSArray, NSDictionary;

@interface OrderedDictionaryReverseObjectEnumerator : NSEnumerator
{
    NSArray *_keys;
    NSDictionary *_values;
    long long _index;
}

+ (id)enumeratorWithKeys:(id)arg1 values:(id)arg2;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(copy, nonatomic) NSDictionary *values; // @synthesize values=_values;
@property(copy, nonatomic) NSArray *keys; // @synthesize keys=_keys;
- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithKeys:(id)arg1 values:(id)arg2;

@end

