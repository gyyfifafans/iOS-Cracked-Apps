//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSString, NSTimer;

@interface TBNewHomeContentManager : NSObject
{
    NSMutableDictionary *_containerIdAndDataDict;
    NSString *_previewParam;
    NSString *_customId;
    NSString *_operationServiceId;
    NSString *_userId;
    NSString *_nick;
    NSMutableDictionary *_callBackNotificationInfo;
    unsigned long long _pageNum;
    unsigned long long _pageTotal;
    unsigned long long _itemLastCount;
    NSMutableSet *_requestingContainIds;
    NSTimer *_timeoutTimer;
    NSMutableDictionary *_requestingUpdateGroupsDict;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *requestingUpdateGroupsDict; // @synthesize requestingUpdateGroupsDict=_requestingUpdateGroupsDict;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) NSMutableSet *requestingContainIds; // @synthesize requestingContainIds=_requestingContainIds;
@property(nonatomic) unsigned long long itemLastCount; // @synthesize itemLastCount=_itemLastCount;
@property(nonatomic) unsigned long long pageTotal; // @synthesize pageTotal=_pageTotal;
@property(nonatomic) unsigned long long pageNum; // @synthesize pageNum=_pageNum;
@property(retain, nonatomic) NSMutableDictionary *callBackNotificationInfo; // @synthesize callBackNotificationInfo=_callBackNotificationInfo;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *operationServiceId; // @synthesize operationServiceId=_operationServiceId;
@property(retain, nonatomic) NSString *customId; // @synthesize customId=_customId;
@property(retain, nonatomic) NSString *previewParam; // @synthesize previewParam=_previewParam;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *containerIdAndDataDict; // @synthesize containerIdAndDataDict=_containerIdAndDataDict;
- (void)fetchNewDataWithIdentifiers:(id)arg1 location:(id)arg2 containerId:(id)arg3 conflictStrategy:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)isCacheContentTimeOutForContainerId:(id)arg1;
- (void)refreshUserInfoCache;
- (id)loadDefaultContentDataForContainerId:(id)arg1;
- (id)loadLocalContentDataForCotainerId:(id)arg1;
- (CDUnknownBlockType)failedBlockForContainerId:(id)arg1;
- (CDUnknownBlockType)finishBlockForContainerId:(id)arg1;
- (CDUnknownBlockType)startBlockForContainerId:(id)arg1;
- (id)identifierForAdvertising;
- (id)guessYouLikeRequestDataParamWithTriggerType:(id)arg1;
- (void)removeTimer;
- (void)setCommonMtopParams:(id)arg1 forContainerId:(id)arg2;
- (void)fetchNewContentForContainerId:(id)arg1;
- (void)getUserInfo;
- (void)getParamsReady;
- (id)contentDicForContainerId:(id)arg1;
- (id)contentFilePathForContainerId:(id)arg1;
- (void)persistentContentDict:(id)arg1 forContainerId:(id)arg2;
- (void)dealloc;
- (id)contentForContainerId:(id)arg1;

@end
