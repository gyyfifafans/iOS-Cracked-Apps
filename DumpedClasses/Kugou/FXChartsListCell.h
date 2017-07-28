//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXSelStyleTableCell.h"

@class KGThemeLabel, KGThemeLine, UIButton, UIImageView;

@interface FXChartsListCell : FXSelStyleTableCell
{
    UIButton *_rankButton;
    UIImageView *_userLogoImageView;
    KGThemeLabel *_nameLable;
    KGThemeLabel *_roomLable;
    UIImageView *_levelImageView;
    UIImageView *_starImageView;
    KGThemeLine *_line;
    KGThemeLabel *_rankLabel;
    long long _type;
    UIImageView *_livingImageView;
}

@property(retain, nonatomic) UIImageView *livingImageView; // @synthesize livingImageView=_livingImageView;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) KGThemeLabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(retain, nonatomic) KGThemeLine *line; // @synthesize line=_line;
@property(retain, nonatomic) UIImageView *starImageView; // @synthesize starImageView=_starImageView;
@property(retain, nonatomic) UIImageView *levelImageView; // @synthesize levelImageView=_levelImageView;
@property(retain, nonatomic) KGThemeLabel *roomLable; // @synthesize roomLable=_roomLable;
@property(retain, nonatomic) KGThemeLabel *nameLable; // @synthesize nameLable=_nameLable;
@property(retain, nonatomic) UIImageView *userLogoImageView; // @synthesize userLogoImageView=_userLogoImageView;
@property(retain, nonatomic) UIButton *rankButton; // @synthesize rankButton=_rankButton;
- (void).cxx_destruct;
- (void)layoutPopType;
- (void)layoutSongType;
- (void)layoutFXRichType;
- (void)layoutFxStarType;
- (void)setLivingState:(_Bool)arg1;
- (void)setRank:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 chartsType:(long long)arg3;

@end
