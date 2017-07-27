//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseViewController.h"

#import "KKMediaPlayerActionDelegate.h"
#import "KKMediaPlayerDataSource.h"
#import "KKMediaPlayerEventProtocol.h"
#import "QLMediaPlayerBusinessDataSource.h"
#import "QLMediaPlayerBusinessDelegate.h"
#import "QLRequestModelDelegate.h"

@class KKMediaRootViewController, NSArray, NSData, NSDictionary, NSString, QLCRMemberMgrViewController, QLChatRoomChatViewController, QLJCEMiniProgramInfo, QLLiveV3DetailModel, QLLiveV3DetailPollModel, QLMovieItem, QLPageStatusView, UIButton, UIImage, UILabel, UIViewController;

@interface QLChatRoomPlayerViewCtl : QLBaseViewController <KKMediaPlayerActionDelegate, QLRequestModelDelegate, KKMediaPlayerDataSource, KKMediaPlayerEventProtocol, QLMediaPlayerBusinessDataSource, QLMediaPlayerBusinessDelegate>
{
    KKMediaRootViewController *_rootPlayer;
    QLChatRoomChatViewController *_chatVewCtl;
    QLLiveV3DetailModel *_detailModel;
    QLLiveV3DetailPollModel *_pollModel;
    UILabel *_liveEndTipsLbl;
    UIButton *_btnUnloginTips;
    QLPageStatusView *_statusView;
    UIButton *_btnExitChat;
    _Bool _viewDidAppeared;
    _Bool _shouldCreateRoomWhenLogin;
    _Bool _enteredChatRoomPlayer;
    _Bool _popedByUser;
    _Bool _bottomViewHide;
    _Bool _liveEndTipsShowed;
    _Bool _startedPlay;
    QLCRMemberMgrViewController *_crmmCtrl;
    NSString *_origenPID;
    id <QLMediaRootPlayerViewCtlDataSource> _playerDataSource;
}

+ (void)createNewChatRoom:(id)arg1 streamId:(id)arg2;
+ (id)presentChatRoomViewCtl;
@property(nonatomic) __weak id <QLMediaRootPlayerViewCtlDataSource> playerDataSource; // @synthesize playerDataSource=_playerDataSource;
@property(nonatomic) _Bool startedPlay; // @synthesize startedPlay=_startedPlay;
@property(nonatomic) _Bool liveEndTipsShowed; // @synthesize liveEndTipsShowed=_liveEndTipsShowed;
@property(nonatomic) _Bool bottomViewHide; // @synthesize bottomViewHide=_bottomViewHide;
@property(nonatomic) _Bool popedByUser; // @synthesize popedByUser=_popedByUser;
@property(nonatomic) _Bool enteredChatRoomPlayer; // @synthesize enteredChatRoomPlayer=_enteredChatRoomPlayer;
@property(nonatomic) _Bool shouldCreateRoomWhenLogin; // @synthesize shouldCreateRoomWhenLogin=_shouldCreateRoomWhenLogin;
@property(copy, nonatomic) NSString *origenPID; // @synthesize origenPID=_origenPID;
@property(nonatomic) _Bool viewDidAppeared; // @synthesize viewDidAppeared=_viewDidAppeared;
@property(retain, nonatomic) QLCRMemberMgrViewController *crmmCtrl; // @synthesize crmmCtrl=_crmmCtrl;
@property(readonly, nonatomic) KKMediaRootViewController *rootPlayer; // @synthesize rootPlayer=_rootPlayer;
- (void).cxx_destruct;
- (_Bool)shouldSaveRecord;
- (_Bool)enableAddListBtn;
- (id)getCurrentAttentionItem;
@property(readonly, nonatomic) unsigned long long shareStyle;
@property(readonly, nonatomic) NSDictionary *shareReportInfo;
@property(readonly, nonatomic) QLMovieItem *shareVideoInfo;
@property(readonly, nonatomic) unsigned long long sharePlatformMask;
@property(readonly, nonatomic) NSString *shareFromPage;
@property(readonly, nonatomic) unsigned long long shareDataType;
@property(readonly, nonatomic) NSString *shareURL;
@property(readonly, nonatomic) UIImage *shareImage;
@property(readonly, nonatomic) NSString *shareImageURL;
@property(readonly, nonatomic) NSString *shareSubTitle;
@property(readonly, nonatomic) NSString *shareTitle;
@property(readonly, nonatomic) NSString *shareID;
- (id)getShareItem;
- (unsigned long long)actionShouldSupportActionTypeMask:(id)arg1;
- (void)kkPlayer:(id)arg1 didClickButton:(unsigned long long)arg2;
- (void)exitChatDown:(id)arg1;
- (int)mpbMgrEntryUIControlPosition:(id)arg1;
- (id)mpbMgrEntryUIControl:(id)arg1;
- (_Bool)shouldShowBusinessEntryUI:(id)arg1;
- (id)pageChineseName;
- (void)onAppDidBecomeActive;
- (void)onAppWillResignActive;
- (void)mpbMediaClosed;
- (void)mpbMediaRotatetionChange;
- (_Bool)showedEndRecmView;
- (_Bool)mpbShouldContinuePlay;
- (void)mpbStartToPlayMedia;
- (void)mpbJobsAfterPlayBackFinished;
- (void)mpbPlayBackFinished;
- (void)mpbMgrSetDataSource:(id)arg1;
- (void)popUp:(_Bool)arg1;
- (void)enterBackground:(id)arg1;
- (void)doSomeCleanupWhenPopup;
- (void)resetMediaPlayerDelegate;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (id)imageForError:(id)arg1;
- (void)enterPage;
- (void)showLiveError:(id)arg1 withLiveStatus:(long long)arg2;
@property(readonly, nonatomic) UILabel *liveEndTipsLbl;
- (_Bool)simplePlayVID:(id)arg1 title:(id)arg2;
- (void)playLiveProgram:(id)arg1 url:(id)arg2;
- (void)loginDidLogOut:(id)arg1;
- (void)loginDidSuccess:(id)arg1;
- (void)doLiveChatFlowPlay;
- (void)doLiveChatFlowPoll;
- (void)scheduleNextPollRequest:(_Bool)arg1;
- (void)doActuelyPollRequest;
- (void)doLiveChatFlowRequestPID:(id)arg1;
- (void)doBeginLiveChatFlow:(_Bool)arg1;
- (void)refreshExitChatBtnStatus;
- (void)refreshChatRoomUIControls;
- (void)loginClicked:(id)arg1;
- (void)refreshGuestNoLoginStatus;
- (void)didMediaPlayerEventOccur:(int)arg1 userInfo:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldShowJumpCallback;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)resetChatBgViewFrame;
- (void)viewDidLoad;
- (void)controlChatRoomUIHidden:(_Bool)arg1;
- (void)publishUnloginMessage;
- (void)retryDown:(id)arg1;
- (void)showError:(_Bool)arg1 error:(id)arg2;
- (void)showLoading:(_Bool)arg1;
- (_Bool)isRightModel:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool needShare;
@property(readonly, nonatomic) NSString *shareActionUrl;
@property(readonly, nonatomic) NSString *shareContent;
@property(readonly, nonatomic) NSString *shareContentTail;
@property(readonly, nonatomic) UIViewController *shareController;
@property(readonly, nonatomic) NSString *shareCopyContent;
@property(readonly, nonatomic) NSDictionary *shareExtendInfo;
@property(readonly, nonatomic) NSData *shareGifData;
@property(readonly, nonatomic) QLJCEMiniProgramInfo *shareMiniProgramInfo;
@property(readonly, nonatomic) NSData *shareOriImgData;
@property(readonly, nonatomic) NSArray *sharePictureList;
@property(readonly, nonatomic) NSString *shareSingleTitle;
@property(readonly) Class superclass;

@end
