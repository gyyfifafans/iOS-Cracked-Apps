//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, UITableView;

@interface FMBackCategoryViewController : FMBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    unsigned long long _currentLevel;
    NSMutableDictionary *_categoriesLevel;
    NSMutableArray *_categoriesName;
    UITableView *_tableView;
    NSMutableArray *_returnCategories;
    NSMutableArray *_initCategories;
    NSString *rootCatId;
    NSString *rootCatName;
    _Bool post;
    NSString *postTitle;
    CDUnknownBlockType _categoryDidSelectBlock;
    _Bool _isModal;
}

- (void).cxx_destruct;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)leftAction:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setCategoryDidSelect:(CDUnknownBlockType)arg1;
- (void)categoryRequestFailed:(id)arg1;
- (void)categoryRequestSuccess:(id)arg1 level:(unsigned long long)arg2;
- (void)requestCategory:(id)arg1 level:(unsigned long long)arg2;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)postWithDraftItemDO:(id)arg1;
- (void)rightAction:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)initNavigationBar;
- (id)initWithURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (id)initWithCategories:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
