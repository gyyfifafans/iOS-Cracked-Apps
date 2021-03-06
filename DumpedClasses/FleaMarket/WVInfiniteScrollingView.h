//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIScrollView, WVActivityIndicatorView;

@interface WVInfiniteScrollingView : UIView
{
    _Bool _isObserving;
    unsigned long long _state;
    CDUnknownBlockType _actionHandler;
    UIScrollView *_scrollView;
    WVActivityIndicatorView *_activityIndicatorView;
    NSMutableArray *_viewForState;
    double _originalBottomInset;
}

@property(nonatomic) _Bool isObserving; // @synthesize isObserving=_isObserving;
@property(nonatomic) double originalBottomInset; // @synthesize originalBottomInset=_originalBottomInset;
@property(retain, nonatomic) NSMutableArray *viewForState; // @synthesize viewForState=_viewForState;
@property(retain, nonatomic) WVActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
- (void)scrollViewDidScroll:(struct CGPoint)arg1;
- (void)setScrollViewContentInset:(struct UIEdgeInsets)arg1;
- (void)setScrollViewContentInsetForLoading;
- (void)resetScrollViewContentInset;
- (void)layoutSubviews;
- (void)resize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)willMoveToSuperview:(id)arg1;
- (void)removeObserving:(id)arg1;
- (void)hide;
- (void)show;
- (void)setCustomView:(id)arg1 forState:(unsigned long long)arg2;
@property(nonatomic) long long activityIndicatorViewStyle;
- (id)initWithScrollView:(id)arg1 withActionHandler:(CDUnknownBlockType)arg2;

@end

