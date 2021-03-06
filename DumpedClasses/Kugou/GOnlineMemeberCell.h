//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MusicBaseCell.h"

@class KGNoHighlightedLabel, KGThemeButton, KGThemeLabel, KQMemberEntity, NSLayoutConstraint, UIImageView;

@interface GOnlineMemeberCell : MusicBaseCell
{
    _Bool _isHiddenRemoveBtn;
    id <GOnlineMemeberCellDelegate> _delegate;
    KQMemberEntity *_member;
    KGThemeButton *_imageHeader;
    KGNoHighlightedLabel *_lblIcon;
    KGThemeLabel *_lblName;
    KGThemeButton *_outButton;
    UIImageView *_genderIcon;
    NSLayoutConstraint *_iconCons;
    NSLayoutConstraint *_outButtonCons;
}

@property(retain, nonatomic) NSLayoutConstraint *outButtonCons; // @synthesize outButtonCons=_outButtonCons;
@property(retain, nonatomic) NSLayoutConstraint *iconCons; // @synthesize iconCons=_iconCons;
@property(retain, nonatomic) UIImageView *genderIcon; // @synthesize genderIcon=_genderIcon;
@property(retain, nonatomic) KGThemeButton *outButton; // @synthesize outButton=_outButton;
@property(retain, nonatomic) KGThemeLabel *lblName; // @synthesize lblName=_lblName;
@property(retain, nonatomic) KGNoHighlightedLabel *lblIcon; // @synthesize lblIcon=_lblIcon;
@property(retain, nonatomic) KGThemeButton *imageHeader; // @synthesize imageHeader=_imageHeader;
@property(nonatomic) _Bool isHiddenRemoveBtn; // @synthesize isHiddenRemoveBtn=_isHiddenRemoveBtn;
@property(retain, nonatomic) KQMemberEntity *member; // @synthesize member=_member;
@property(nonatomic) __weak id <GOnlineMemeberCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickHeaderImage;
- (void)clickRemveMemberButton;
- (id)simpleConstrain:(id)arg1 withDicViews:(id)arg2;
- (id)verticalCenter:(id)arg1;
- (id)genderImage:(id)arg1;
- (id)roleBackgroundColor:(id)arg1;
- (id)roleName:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

