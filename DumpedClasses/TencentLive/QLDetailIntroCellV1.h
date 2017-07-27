//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

#import "QLActionDelegate.h"
#import "QLCommentCountUserHeaderViewClickEventDelegate.h"

@class NSString, QLCommentCountUserHeaderView, QLHollywoodGiftButton, QLJCEMarkLabel, QLJCEONADetailsToolbar, QLUIButton, UIButton;

@interface QLDetailIntroCellV1 : QLBaseTabelViewCell <QLActionDelegate, QLCommentCountUserHeaderViewClickEventDelegate>
{
    UIButton *_btnNotify;
    UIButton *_btnDownload;
    QLUIButton *_btnShare;
    QLHollywoodGiftButton *_btnGift;
    QLCommentCountUserHeaderView *_commentHeadView;
    QLJCEONADetailsToolbar *_toolbarInfo;
    QLJCEMarkLabel *_titleMark;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property(retain, nonatomic) QLCommentCountUserHeaderView *commentHeadView; // @synthesize commentHeadView=_commentHeadView;
@property(retain, nonatomic) QLJCEMarkLabel *titleMark; // @synthesize titleMark=_titleMark;
@property(retain, nonatomic) QLJCEONADetailsToolbar *toolbarInfo; // @synthesize toolbarInfo=_toolbarInfo;
- (void).cxx_destruct;
- (void)setObject:(id)arg1;
- (void)reportShowUp;
- (void)itemCellDidShowUp;
- (void)refreshShareButtonState;
- (void)refreshNotifyState;
- (void)refreshHotCommentsViewData;
- (void)refreshDownloadState;
- (void)updateCommentViewWithData:(id)arg1;
- (void)updateHotCommentsCount:(id)arg1;
- (void)layoutSubviews;
- (void)shareClicked:(id)arg1;
- (void)downloadClicked:(id)arg1;
- (void)notifyClicked:(id)arg1;
- (id)getAttentionItem;
- (void)clickCommentView:(id)arg1;
- (id)createQLUIButtonWithImage:(id)arg1 selector:(SEL)arg2 accessName:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
