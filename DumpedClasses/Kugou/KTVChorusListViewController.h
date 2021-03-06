//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVViewController.h"

#import "KFScrollPageManagerDelegate.h"
#import "KGPageViewProtocol.h"
#import "KTVChorusMineVLLDelegate.h"
#import "KTVChorusRecommendVLLDelegate.h"
#import "TabViewDelegate.h"
#import "WebViewWillRemoveDelegate.h"

@class KFScrollPageManager, KTVChorusHeaderView, KTVChorusMineVLL, KTVChorusMineVM, KTVChorusMineView, KTVChorusRecommendVLL, KTVChorusRecommendVM, KTVChorusRecommendView, NSString, TipsTabView;

@interface KTVChorusListViewController : KTVViewController <TabViewDelegate, KFScrollPageManagerDelegate, KTVChorusRecommendVLLDelegate, KGPageViewProtocol, KTVChorusMineVLLDelegate, WebViewWillRemoveDelegate>
{
    long long _selectedIndex;
    KTVChorusHeaderView *_headerView;
    TipsTabView *_tabView;
    KFScrollPageManager *_scrollContent;
    KTVChorusRecommendView *_recommendView;
    KTVChorusRecommendVM *_recommendVM;
    KTVChorusRecommendVLL *_recommendVLL;
    KTVChorusMineView *_mineView;
    KTVChorusMineVM *_mineVM;
    KTVChorusMineVLL *_mineVLL;
}

@property(retain, nonatomic) KTVChorusMineVLL *mineVLL; // @synthesize mineVLL=_mineVLL;
@property(retain, nonatomic) KTVChorusMineVM *mineVM; // @synthesize mineVM=_mineVM;
@property(retain, nonatomic) KTVChorusMineView *mineView; // @synthesize mineView=_mineView;
@property(retain, nonatomic) KTVChorusRecommendVLL *recommendVLL; // @synthesize recommendVLL=_recommendVLL;
@property(retain, nonatomic) KTVChorusRecommendVM *recommendVM; // @synthesize recommendVM=_recommendVM;
@property(retain, nonatomic) KTVChorusRecommendView *recommendView; // @synthesize recommendView=_recommendView;
@property(retain, nonatomic) KFScrollPageManager *scrollContent; // @synthesize scrollContent=_scrollContent;
@property(retain, nonatomic) TipsTabView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) KTVChorusHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)reloadData:(id)arg1;
- (void)showLoginView:(id)arg1;
- (void)mineVLL:(id)arg1 didCollectedWithOpusInfo:(id)arg2;
- (void)mineVLL:(id)arg1 didSelectedRowWithOpusInfo:(id)arg2;
- (void)recommendVLL:(id)arg1 didClickChorusButton:(id)arg2 title:(id)arg3;
- (void)recommendVLL:(id)arg1 didSelectedRowWithOpus:(id)arg2 title:(id)arg3;
- (void)webViewWillRemove;
- (void)scrollPageManager:(id)arg1 willShowViewAtIndex:(long long)arg2;
- (void)btnClickedSameIndex:(long long)arg1;
- (void)btnClicked:(long long)arg1;
- (id)pageSrollview;
- (long long)currentPage;
- (long long)totalPageCount;
- (void)showRedPoint:(long long)arg1;
- (void)showHeaderView:(_Bool)arg1;
- (void)headerViewAction;
- (void)setupHeaderView;
- (void)setupMineView;
- (void)setupRecommendView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)KGUsingControllerState:(int)arg1;
- (long long)showPlayBarWay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

