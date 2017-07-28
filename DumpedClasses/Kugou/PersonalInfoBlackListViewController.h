//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "KGTableViewDelegate.h"
#import "UITableViewDataSource.h"

@class KGDefaultNetErrorView, KGTableView, NSArray, NSMutableArray, NSString, PersonalInfoBlackListBLL, UILabel, UITextView;

@interface PersonalInfoBlackListViewController : KGViewController <KGTableViewDelegate, UITableViewDataSource>
{
    _Bool _hasMore;
    _Bool _isLoading;
    _Bool _isCheckBoxStyle;
    _Bool _isRemoving;
    KGTableView *_tableView;
    UITextView *_textView;
    NSMutableArray *_data;
    NSArray *_sources;
    NSMutableArray *_selectedMembers;
    NSMutableArray *_selectedBICountMembers;
    UILabel *_footView;
    KGDefaultNetErrorView *_retryAndErrorView;
    PersonalInfoBlackListBLL *_personalInfoBlackListBLL;
}

@property(retain, nonatomic) PersonalInfoBlackListBLL *personalInfoBlackListBLL; // @synthesize personalInfoBlackListBLL=_personalInfoBlackListBLL;
@property(retain, nonatomic) KGDefaultNetErrorView *retryAndErrorView; // @synthesize retryAndErrorView=_retryAndErrorView;
@property(retain, nonatomic) UILabel *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) NSMutableArray *selectedBICountMembers; // @synthesize selectedBICountMembers=_selectedBICountMembers;
@property(retain, nonatomic) NSMutableArray *selectedMembers; // @synthesize selectedMembers=_selectedMembers;
@property(retain, nonatomic) NSArray *sources; // @synthesize sources=_sources;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) KGTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)onChangeTheme:(id)arg1;
- (void)p_cleanSelectedItem;
- (void)okAction:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 loadingCellForRowAtIndexPath:(id)arg2;
- (long long)showPlayBarWay;
- (void)showFilterButton:(_Bool)arg1;
- (void)requestAgain;
- (void)hiddenErrorView;
- (void)showErrorView;
- (void)requestData;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
