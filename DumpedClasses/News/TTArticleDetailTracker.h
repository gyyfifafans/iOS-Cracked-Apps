//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableArray, TTDetailModel, TTDetailWebviewContainer, TTWebViewRedirectTracker;

@interface TTArticleDetailTracker : NSObject
{
    _Bool _userHasClickLink;
    TTDetailModel *_detailModel;
    TTDetailWebviewContainer *_detailWebView;
    TTWebViewRedirectTracker *_webviewRedirectTracker;
    NSDate *_startLoadDate;
    NSMutableArray *_jumpLinks;
    long long _jumpCount;
    long long _clickLinkCount;
}

@property(nonatomic) long long clickLinkCount; // @synthesize clickLinkCount=_clickLinkCount;
@property(nonatomic) long long jumpCount; // @synthesize jumpCount=_jumpCount;
@property(nonatomic) _Bool userHasClickLink; // @synthesize userHasClickLink=_userHasClickLink;
@property(retain, nonatomic) NSMutableArray *jumpLinks; // @synthesize jumpLinks=_jumpLinks;
@property(retain, nonatomic) NSDate *startLoadDate; // @synthesize startLoadDate=_startLoadDate;
@property(retain, nonatomic) TTWebViewRedirectTracker *webviewRedirectTracker; // @synthesize webviewRedirectTracker=_webviewRedirectTracker;
@property(retain, nonatomic) TTDetailWebviewContainer *detailWebView; // @synthesize detailWebView=_detailWebView;
@property(retain, nonatomic) TTDetailModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (void)tt_sendDetailTTLogV2WithEvent:(id)arg1 eventContext:(id)arg2 referContext:(id)arg3;
- (void)tt_sendStayTimeImpresssion;
- (void)tt_sendStartLoadNativeContentForWebTimeoffTrack;
- (void)tt_sendReadTrackWithPCT:(double)arg1 pageCount:(long long)arg2;
- (void)tt_sendJumpEventTrack;
- (void)tt_sendJumpToAppStoreTrackWithReuqestURLStr:(id)arg1 inWhiteList:(_Bool)arg2;
- (void)tt_sendDomCompleteEventTrack;
- (void)tt_sendStatStayEventTrack:(long long)arg1 error:(id)arg2;
- (void)tt_sendJumpLinksTrackWithKey:(id)arg1;
- (void)tt_sendWKUIWebViewLoadDateIfNeed;
- (void)tt_sendStartLoadDateTrackIfNeeded;
- (void)tt_resetStartLoadDate;
- (id)initWithDetailModel:(id)arg1 detailWebView:(id)arg2;
- (id)detailTrackerCommonParams;

@end
