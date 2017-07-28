//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FALCBaseChatCell.h"

@class NSDictionary, UIButton, UILabel;

@interface FALCPublicGameNoticeCell : FALCBaseChatCell
{
    CDUnknownBlockType _openCatchDollBlock;
    UILabel *_titleLabel;
    NSDictionary *_msgDic;
    UIButton *_tapBtn;
    double _cellWidth;
}

+ (double)cellHeightOfMsg:(id)arg1 maxWidth:(double)arg2;
+ (id)updateContentStr:(id)arg1;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(retain, nonatomic) UIButton *tapBtn; // @synthesize tapBtn=_tapBtn;
@property(retain, nonatomic) NSDictionary *msgDic; // @synthesize msgDic=_msgDic;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType openCatchDollBlock; // @synthesize openCatchDollBlock=_openCatchDollBlock;
- (void).cxx_destruct;
- (void)tapBtnClick;
- (void)updateView;
- (void)setMessage:(id)arg1;
- (void)initView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
