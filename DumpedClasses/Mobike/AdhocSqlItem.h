//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface AdhocSqlItem : NSObject
{
    long long _item_id;
    NSDictionary *_item_custom;
    NSDictionary *_item_stat;
    NSDictionary *_item_exif;
}

@property(retain, nonatomic) NSDictionary *item_exif; // @synthesize item_exif=_item_exif;
@property(retain, nonatomic) NSDictionary *item_stat; // @synthesize item_stat=_item_stat;
@property(retain, nonatomic) NSDictionary *item_custom; // @synthesize item_custom=_item_custom;
@property(nonatomic) long long item_id; // @synthesize item_id=_item_id;
- (void).cxx_destruct;
- (id)init;

@end
