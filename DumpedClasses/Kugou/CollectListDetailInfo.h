//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KugouObject.h"

@class CollectListEntity, NSArray;

@interface CollectListDetailInfo : KugouObject
{
    CollectListEntity *_listEntity;
    NSArray *_songInfoList;
}

@property(retain, nonatomic) NSArray *songInfoList; // @synthesize songInfoList=_songInfoList;
@property(retain, nonatomic) CollectListEntity *listEntity; // @synthesize listEntity=_listEntity;
- (void).cxx_destruct;

@end
