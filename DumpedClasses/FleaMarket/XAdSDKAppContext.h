//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "XAdDataManagerDelegate.h"
#import "XAdSDKSlotDelegate.h"

@class NSString, XAdContextParameters, XAdDataManager, XAdInstance, XAdSDKSlot;

@interface XAdSDKAppContext : UIView <XAdSDKSlotDelegate, XAdDataManagerDelegate>
{
    XAdInstance *_adInstance;
    XAdSDKSlot *_slot;
    XAdDataManager *_dataManager;
    long long _autoPlayStatus;
    _Bool _isInitCheck;
    _Bool _isRegisterTableViewObservers;
    NSString *_preAdJson;
    int _loadTime;
    _Bool _appViewControllerShown;
    _Bool _loading;
    _Bool _ready;
    _Bool _needsToBeDisplayedWhenReady;
    XAdContextParameters *_contextParams;
    id <XAdSDKAppContextDelegate> _appDelegate;
}

@property(nonatomic, getter=isNeedsToBeDisplayedWhenReady) _Bool needsToBeDisplayedWhenReady; // @synthesize needsToBeDisplayedWhenReady=_needsToBeDisplayedWhenReady;
@property(nonatomic, getter=isReady) _Bool ready; // @synthesize ready=_ready;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) __weak id <XAdSDKAppContextDelegate> appDelegate; // @synthesize appDelegate=_appDelegate;
@property(retain, nonatomic) XAdContextParameters *contextParams; // @synthesize contextParams=_contextParams;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didEnterBackground:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)unRegisterTableViewObservers;
- (void)registerTableViewObservers;
- (void)registerObservers;
- (void)unRegisterObservers;
- (void)loadAssetFail:(id)arg1;
- (void)loadAssetSuccess;
- (void)onOpenWebView:(id)arg1;
- (void)onAdVideoComplete;
- (void)onAdVideoLoadFailInPlaying:(_Bool)arg1;
- (void)onAdVideoLoadSuccess;
- (void)slotDidDismissModal;
- (id)viewControllerForPresentingModalView;
- (id)getAdParent;
- (void)destroy;
- (void)reset;
- (void)setAutoPlayStatus:(long long)arg1;
- (void)checkSlotMoreThenHalfOfRect;
- (void)updateAdInScrollView;
- (void)stopAd;
- (void)resumeAd;
- (void)load:(id)arg1;
- (id)contextParameter;
- (void)adManagerDidExpireAd:(id)arg1;
- (void)adManager:(id)arg1 didReceiveAdData:(id)arg2;
- (void)adManager:(id)arg1 didFailToLoadAdWithError:(id)arg2;
- (id)getParentTableView;
- (_Bool)isSDKInnerViewControllerResponder;
- (id)getParentViewController;
- (long long)getAutoPlayStatus;
- (_Bool)moreThenHalfOfRect:(struct CGRect)arg1 visibleInRect:(struct CGRect)arg2;
- (void)setAdVisible:(_Bool)arg1;
- (void)failedLoadingAdWithError:(id)arg1;
- (void)closeAd;
- (void)updateVisibility;
- (void)displayAd;
- (_Bool)shouldPlay;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithDelegate:(id)arg1 manager:(id)arg2 frame:(struct CGRect)arg3 paramters:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

