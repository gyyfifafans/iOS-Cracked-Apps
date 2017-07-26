//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "APCommonSelectDelegate.h"
#import "APCommonSelectTableViewCellDelegate.h"

@class APCommonSelectView, NSMutableArray, NSMutableDictionary, NSString, SocialCommonErrorView, SocialRecommendCard, UIActivityIndicatorView, UIView;

@interface APContactRecommendViewController : DTViewController <APCommonSelectTableViewCellDelegate, APCommonSelectDelegate>
{
    _Bool _didLoadData;
    _Bool _hasMore;
    _Bool _isLoadingNextPage;
    NSString *_source;
    APCommonSelectView *_selectView;
    NSMutableArray *_dataArray;
    NSMutableDictionary *_dataDict;
    NSMutableDictionary *_addedContact;
    SocialRecommendCard *_card;
    NSMutableDictionary *_errorContact;
    SocialCommonErrorView *_errorView;
    UIActivityIndicatorView *_indView;
    NSMutableArray *_showedArray;
    long long _dataIndex;
    UIView *_footerLoadingView;
}

@property(nonatomic) _Bool isLoadingNextPage; // @synthesize isLoadingNextPage=_isLoadingNextPage;
@property(retain, nonatomic) UIView *footerLoadingView; // @synthesize footerLoadingView=_footerLoadingView;
@property(nonatomic) long long dataIndex; // @synthesize dataIndex=_dataIndex;
@property(retain, nonatomic) NSMutableArray *showedArray; // @synthesize showedArray=_showedArray;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) UIActivityIndicatorView *indView; // @synthesize indView=_indView;
@property(nonatomic) _Bool didLoadData; // @synthesize didLoadData=_didLoadData;
@property(retain, nonatomic) SocialCommonErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) NSMutableDictionary *errorContact; // @synthesize errorContact=_errorContact;
@property(retain, nonatomic) SocialRecommendCard *card; // @synthesize card=_card;
@property(retain, nonatomic) NSMutableDictionary *addedContact; // @synthesize addedContact=_addedContact;
@property(retain, nonatomic) NSMutableDictionary *dataDict; // @synthesize dataDict=_dataDict;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) APCommonSelectView *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)errorViewShow:(_Bool)arg1 netError:(_Bool)arg2;
- (long long)getSwitchValueOfSetPeronalInfoMaxShowTimes;
- (void)commonView:(id)arg1 didClickRightMenuBtnForItem:(id)arg2 cell:(id)arg3;
- (id)manageBtnTitlesInCommonView:(id)arg1 item:(id)arg2;
- (_Bool)highlightRightManageBtnInCommonView:(id)arg1 item:(id)arg2;
- (id)contactInfoFromMsg:(id)arg1;
- (void)commonView:(id)arg1 scorllViewDidScroll:(id)arg2;
- (void)didClickButtonForItem:(id)arg1 commonView:(id)arg2;
- (void)didSelectItems:(id)arg1 commonView:(id)arg2;
- (void)commonView:(id)arg1 configCell:(id)arg2 item:(id)arg3;
- (id)cellClassNameInCommonView:(id)arg1 item:(id)arg2;
- (int)displayModeForCommonView:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (id)cellConfigInCommonView:(id)arg1 item:(id)arg2;
- (id)mainDataInCommonView:(id)arg1;
- (void)onDataUpdate:(id)arg1;
- (void)adjustFrames;
- (void)setupRecommendCard;
- (void)setupSelectView;
- (void)friendSendStateChange:(id)arg1;
- (void)updateFriend:(id)arg1;
- (void)setupFooterLoadingView;
- (void)judgeToShowNextPageLoading;
- (void)triggerToLoadNextPage;
- (void)reloadRecommendData;
- (void)handleRecommandDataResponse:(id)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
