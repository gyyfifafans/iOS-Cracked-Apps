//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBLiveFeedAccountModel : TBJSONModel
{
    _Bool _canPublishLiveVideo;
    _Bool _v;
    NSString *_accountId;
    NSString *_accountNick;
    NSString *_accountExplain;
    NSString *_headImg;
    NSString *_accountDes;
    NSString *_accountUrl;
}

@property(nonatomic) _Bool v; // @synthesize v=_v;
@property(nonatomic) _Bool canPublishLiveVideo; // @synthesize canPublishLiveVideo=_canPublishLiveVideo;
@property(copy, nonatomic) NSString *accountUrl; // @synthesize accountUrl=_accountUrl;
@property(copy, nonatomic) NSString *accountDes; // @synthesize accountDes=_accountDes;
@property(copy, nonatomic) NSString *headImg; // @synthesize headImg=_headImg;
@property(copy, nonatomic) NSString *accountExplain; // @synthesize accountExplain=_accountExplain;
@property(copy, nonatomic) NSString *accountNick; // @synthesize accountNick=_accountNick;
@property(copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
- (void).cxx_destruct;

@end

