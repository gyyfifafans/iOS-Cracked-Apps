//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSNumber;

@interface HTSVideoCommentDataManager : NSObject
{
    _Bool _hasMore;
    _Bool _isLoadingComments;
    _Bool _isSendingComments;
    float _barrageBeginSeconds;
    NSMutableArray *_hotCommentModels;
    NSMutableArray *_hotCommentModelIds;
    NSMutableArray *_freshCommentModels;
    NSMutableArray *_barrageCommentModels;
    NSNumber *_minTime;
    NSNumber *_maxTime;
    long long _offset;
    NSNumber *_totalCommentCount;
}

@property(nonatomic) _Bool isSendingComments; // @synthesize isSendingComments=_isSendingComments;
@property(nonatomic) _Bool isLoadingComments; // @synthesize isLoadingComments=_isLoadingComments;
@property(copy, nonatomic) NSNumber *totalCommentCount; // @synthesize totalCommentCount=_totalCommentCount;
@property(nonatomic) float barrageBeginSeconds; // @synthesize barrageBeginSeconds=_barrageBeginSeconds;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSNumber *maxTime; // @synthesize maxTime=_maxTime;
@property(copy, nonatomic) NSNumber *minTime; // @synthesize minTime=_minTime;
@property(retain, nonatomic) NSMutableArray *barrageCommentModels; // @synthesize barrageCommentModels=_barrageCommentModels;
@property(retain, nonatomic) NSMutableArray *freshCommentModels; // @synthesize freshCommentModels=_freshCommentModels;
@property(retain, nonatomic) NSMutableArray *hotCommentModelIds; // @synthesize hotCommentModelIds=_hotCommentModelIds;
@property(retain, nonatomic) NSMutableArray *hotCommentModels; // @synthesize hotCommentModels=_hotCommentModels;
- (void).cxx_destruct;
- (void)diggCommentWithID:(id)arg1 complection:(CDUnknownBlockType)arg2;
- (void)reportCommentWithID:(id)arg1 videoID:(id)arg2 byUser:(id)arg3 complection:(CDUnknownBlockType)arg4;
- (void)reportVideoWithID:(id)arg1 byUser:(id)arg2 complection:(CDUnknownBlockType)arg3;
- (void)deleteCommentItemWithID:(id)arg1 complection:(CDUnknownBlockType)arg2;
- (void)commentVideoItemWithID:(id)arg1 content:(id)arg2 replyToComment:(id)arg3 complection:(CDUnknownBlockType)arg4;
- (void)commentVideoItemWithID:(id)arg1 content:(id)arg2 complection:(CDUnknownBlockType)arg3;
- (void)requestCommentListWithID:(id)arg1 offset:(long long)arg2 count:(long long)arg3 complection:(CDUnknownBlockType)arg4;
- (void)loadMoreListDatWithID:(id)arg1 complection:(CDUnknownBlockType)arg2;
- (void)refreshListDataWithID:(id)arg1 complection:(CDUnknownBlockType)arg2;
- (void)insertModel:(id)arg1 atIndex:(long long)arg2;
- (_Bool)isHotModelForIndexPath:(id)arg1;
- (id)modelForIndexPath:(id)arg1;
- (long long)cellNumberForSection:(long long)arg1;
- (long long)numberOfSections;
- (_Bool)isEmpty;
- (_Bool)canLoadMore;
- (void)clearOffset;
- (id)init;

@end
