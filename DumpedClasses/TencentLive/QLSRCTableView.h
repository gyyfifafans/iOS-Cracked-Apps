//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class UIImageView;

@interface QLSRCTableView : UITableView
{
    _Bool _scheduling;
    UIImageView *_SRCTBGIMGVIEW;
    unsigned long long _dispatchAfterTryCount;
    CDUnknownBlockType _reloadDataCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType reloadDataCompletionBlock; // @synthesize reloadDataCompletionBlock=_reloadDataCompletionBlock;
@property(nonatomic) unsigned long long dispatchAfterTryCount; // @synthesize dispatchAfterTryCount=_dispatchAfterTryCount;
@property(nonatomic) _Bool scheduling; // @synthesize scheduling=_scheduling;
@property(retain, nonatomic) UIImageView *SRCTBGIMGVIEW; // @synthesize SRCTBGIMGVIEW=_SRCTBGIMGVIEW;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reloadDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)dealloc;

@end

