//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMCommonCell.h"

#import "AttributedLableDelegate.h"

@class AttributedLabel, NMAvatarView, NMComment, NMNameButton, NSString, UIImageView, UILabel;

@interface NMInboxCommentCell : NMCommonCell <AttributedLableDelegate>
{
    double _contentWidth;
    NMNameButton *_nameButton;
    AttributedLabel *_messageLabel;
    AttributedLabel *_quoteLabel;
    UIImageView *_quoteBg;
    UILabel *_timeLabel;
    UIImageView *_quoteInsideImageView;
    NMComment *_comment;
    NMAvatarView *_avatarView;
    id _delegate;
}

+ (id)genContent:(id)arg1;
+ (double)height:(id)arg1;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NMAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) NMComment *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
- (void)userNameTouchedWithUserNickName:(id)arg1;
- (void)topicNameTouched:(id)arg1;
- (void)attributedLabel:(id)arg1 clickedOnLink:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setChangeSkin:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

