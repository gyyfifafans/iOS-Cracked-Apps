//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

@class NSArray<KTVCompetitionCanvasInfo>, NSString;

@interface KTVCompetitionCanvassInfo : KTVObjectModel
{
    int _playerId;
    long long _pkId;
    long long _judgeFromOutsideNum;
    NSString *_canvassUrl;
    NSString *_canvassUpperLimitMessage;
    NSArray<KTVCompetitionCanvasInfo> *_judgeFromOutsideList;
}

@property(retain, nonatomic) NSArray<KTVCompetitionCanvasInfo> *judgeFromOutsideList; // @synthesize judgeFromOutsideList=_judgeFromOutsideList;
@property(retain, nonatomic) NSString *canvassUpperLimitMessage; // @synthesize canvassUpperLimitMessage=_canvassUpperLimitMessage;
@property(retain, nonatomic) NSString *canvassUrl; // @synthesize canvassUrl=_canvassUrl;
@property(nonatomic) long long judgeFromOutsideNum; // @synthesize judgeFromOutsideNum=_judgeFromOutsideNum;
@property(nonatomic) long long pkId; // @synthesize pkId=_pkId;
@property(nonatomic) int playerId; // @synthesize playerId=_playerId;
- (void).cxx_destruct;

@end
