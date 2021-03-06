//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ClickRecordViewProtocol.h"

@class AudioModel, FavClickRecordViewController, NSString, UIWindow;

@interface FavAudioRecordView : UIView <ClickRecordViewProtocol>
{
    FavClickRecordViewController *_recordView;
    UIWindow *_maskForNavTitle;
    _Bool _recording;
    double _keyboardHeight;
    double _topOrigin;
    double _topMaskForNavTitleOrigin;
    id <FavAddItemDelegate> _itemDelegate;
    AudioModel *_audioModel;
}

@property(retain, nonatomic) AudioModel *audioModel; // @synthesize audioModel=_audioModel;
@property(nonatomic) id <FavAddItemDelegate> itemDelegate; // @synthesize itemDelegate=_itemDelegate;
- (void)receiveRecordTooShortNotification:(id)arg1;
- (void)onRecordSend:(id)arg1 recordPath:(id)arg2 recordTime:(int)arg3;
- (void)onRecordCanceled:(id)arg1;
- (void)onRecordStarted:(id)arg1;
- (void)hideMaskView;
- (void)singleTapMaskView;
- (void)showMaskView;
- (void)keyboardChangeFrame:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 audioModel:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 audioModel:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

