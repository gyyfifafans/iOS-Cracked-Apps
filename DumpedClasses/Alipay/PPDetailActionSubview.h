//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class APButton, NSString;

@interface PPDetailActionSubview : UIView
{
    _Bool _isFollowed;
    id <PPSubviewsDelegate> _delegate;
    APButton *_addBtn;
    APButton *_viewBtn;
    NSString *_publicId;
    NSString *_realName;
    NSString *_followType;
}

@property(retain, nonatomic) NSString *followType; // @synthesize followType=_followType;
@property(retain, nonatomic) NSString *realName; // @synthesize realName=_realName;
@property(retain, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
@property(retain, nonatomic) APButton *viewBtn; // @synthesize viewBtn=_viewBtn;
@property(retain, nonatomic) APButton *addBtn; // @synthesize addBtn=_addBtn;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(nonatomic) __weak id <PPSubviewsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setViewButtonHidden:(_Bool)arg1;
- (void)setAddButtonHidden:(_Bool)arg1;
- (void)changeButtonTitleByFollowStateAndDirection:(_Bool)arg1;
- (_Bool)isPersonal;
- (void)deleteFollow:(id)arg1;
- (void)enableViewButton;
- (void)hideButton:(_Bool)arg1;
- (void)showButtonFromFollowState:(_Bool)arg1;
- (void)view:(id)arg1;
- (void)add:(id)arg1;
- (void)dealloc;
- (id)initWithParent:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

