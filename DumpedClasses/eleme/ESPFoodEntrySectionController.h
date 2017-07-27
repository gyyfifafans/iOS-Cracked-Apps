//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

@class ESPEntryGroupInfo, ESPEntryInfo, NSArray;

@interface ESPFoodEntrySectionController : IGListSectionController
{
    NSArray *_datas;
    ESPEntryGroupInfo *_groupInfo;
    ESPEntryInfo *_entryInfo;
}

@property(retain, nonatomic) ESPEntryInfo *entryInfo; // @synthesize entryInfo=_entryInfo;
@property(retain, nonatomic) ESPEntryGroupInfo *groupInfo; // @synthesize groupInfo=_groupInfo;
@property(copy, nonatomic) NSArray *datas; // @synthesize datas=_datas;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)init;

@end
