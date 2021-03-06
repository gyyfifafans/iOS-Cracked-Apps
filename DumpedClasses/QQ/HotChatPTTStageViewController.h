//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "GSRequestCallBackDelegate.h"
#import "GroupMemberListDelegate.h"
#import "HotChatPTTSeatMenuViewDelegate.h"
#import "HotChatPTTSeatViewDelegate.h"
#import "PTTTimelinePluginDelegate.h"
#import "PluginDataSource.h"
#import "UIActionSheetDelegate.h"

@class HCPttSeatRequest, HotChatPTTEmptyView, HotChatPTTGradientAnimationView, HotChatPTTSeatViewModel, HotChatPTTWaveAnimationView, ITPopoverView, NSArray, NSMutableArray, NSString, NSTimer, PluginManager, QQHotChatMemberListViewController, QQHotChatModel, UIImageView, UIView, USZanLoveAnimationView;

@interface HotChatPTTStageViewController : QQViewController <HotChatPTTSeatViewDelegate, HotChatPTTSeatMenuViewDelegate, GSRequestCallBackDelegate, GroupMemberListDelegate, UIActionSheetDelegate, PTTTimelinePluginDelegate, PluginDataSource>
{
    int _zanAnchorPoint;
    NSMutableArray *_zanAnchorArray;
    NSTimer *_zanScanTimer;
    unsigned long long _zanCurrentRound;
    _Bool _receiveNewMsgHasOperated;
    id <PTTStageDelegate> _delegate;
    QQHotChatModel *_hotChatModel;
    PluginManager *_pManager;
    UIView *_seatBarView;
    NSArray *_seatViewModelArray;
    HotChatPTTWaveAnimationView *_toLeftWaveView;
    HotChatPTTWaveAnimationView *_toRightWaveView;
    HotChatPTTGradientAnimationView *_gradientView;
    HotChatPTTEmptyView *_emptyView;
    ITPopoverView *_popOverView;
    HotChatPTTSeatViewModel *_selectedModel;
    HotChatPTTSeatViewModel *_highLightedModel;
    QQHotChatMemberListViewController *_memInviteVC;
    UIImageView *_separateLine;
    USZanLoveAnimationView *_zanAnimationLayer;
    HCPttSeatRequest *_seatRequest;
}

@property(nonatomic) _Bool receiveNewMsgHasOperated; // @synthesize receiveNewMsgHasOperated=_receiveNewMsgHasOperated;
@property(retain, nonatomic) HCPttSeatRequest *seatRequest; // @synthesize seatRequest=_seatRequest;
@property(retain, nonatomic) USZanLoveAnimationView *zanAnimationLayer; // @synthesize zanAnimationLayer=_zanAnimationLayer;
@property(retain, nonatomic) UIImageView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) QQHotChatMemberListViewController *memInviteVC; // @synthesize memInviteVC=_memInviteVC;
@property(retain, nonatomic) HotChatPTTSeatViewModel *highLightedModel; // @synthesize highLightedModel=_highLightedModel;
@property(nonatomic) __weak HotChatPTTSeatViewModel *selectedModel; // @synthesize selectedModel=_selectedModel;
@property(retain, nonatomic) ITPopoverView *popOverView; // @synthesize popOverView=_popOverView;
@property(retain, nonatomic) HotChatPTTEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) HotChatPTTGradientAnimationView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) HotChatPTTWaveAnimationView *toRightWaveView; // @synthesize toRightWaveView=_toRightWaveView;
@property(retain, nonatomic) HotChatPTTWaveAnimationView *toLeftWaveView; // @synthesize toLeftWaveView=_toLeftWaveView;
@property(retain, nonatomic) NSArray *seatViewModelArray; // @synthesize seatViewModelArray=_seatViewModelArray;
@property(retain, nonatomic) UIView *seatBarView; // @synthesize seatBarView=_seatBarView;
@property(retain, nonatomic) PluginManager *pManager; // @synthesize pManager=_pManager;
@property(retain, nonatomic) QQHotChatModel *hotChatModel; // @synthesize hotChatModel=_hotChatModel;
@property(nonatomic) __weak id <PTTStageDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)canAutoPlayVoice;
- (void)shouldRefreshStage:(id)arg1;
- (void)timelinePluginNeedShowSheet:(id)arg1 tag:(long long)arg2 cellModel:(id)arg3;
- (void)timelinePluginNeedShowTips:(id)arg1;
- (_Bool)isGirlBackgroundInStage;
- (void)shouldHideEmptyView:(id)arg1;
- (void)shouldShowEmptyView:(id)arg1;
- (void)onStopVoiceModel:(id)arg1;
- (void)onPlayVoiceModel:(id)arg1;
- (id)getPttList;
- (void)loadWaveView;
- (void)loadGradientView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showActionSheet:(id)arg1 tag:(long long)arg2 cellModel:(id)arg3;
- (_Bool)isUinOnSeat:(long long)arg1;
- (void)highLightUserWithUin:(unsigned long long)arg1 isGirl:(_Bool)arg2;
- (void)hideMenuIfNeeded:(id)arg1;
- (void)showPopoverMenu:(id)arg1 forView:(id)arg2;
- (void)sendSeatRequest;
- (void)refreshPTTNavigationBar;
- (void)onKickedOutFromHotChat;
- (void)onSeatInfoChanged:(id)arg1;
- (void)requestDidFailed:(id)arg1 userInfo:(id)arg2;
- (void)requestDidSucceed:(id)arg1 userInfo:(id)arg2;
- (void)onMemberSelected:(id)arg1;
- (void)onReceiveNewZan:(unsigned long long)arg1 withInterval:(double)arg2;
- (void)onMenuItemClicked:(id)arg1 operationType:(unsigned long long)arg2;
- (void)onSeatViewClicked:(id)arg1;
- (void)showSeatBar:(_Bool)arg1;
- (void)refreshSeatBar;
- (void)updateSeatBarView;
- (void)loadSeparateLine;
- (void)hideEmptyView;
- (void)showEmptyView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)initNotifications;
- (id)initWithHotChatModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

