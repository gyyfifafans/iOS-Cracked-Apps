//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UILabel, UIProgressView;

@interface WerewolfRNDownloadView : UIView
{
    UIProgressView *_customProgress;
    UILabel *_label;
    UILabel *_progressLabel;
    NSTimer *_timer;
    float _progress;
}

- (void)offlinePluginDownloaded:(id)arg1;
- (void)PluginUpdateHandler:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)invildTimer;
- (void)timerAction;
- (void)dealWithUpdated;
- (void)removeFromSuperview;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

@end
