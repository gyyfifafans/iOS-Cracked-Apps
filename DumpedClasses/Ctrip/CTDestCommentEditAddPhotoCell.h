//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTDestBaseTableViewCell.h"

@class UIButton, UIImageView;

@interface CTDestCommentEditAddPhotoCell : CTDestBaseTableViewCell
{
    CDUnknownBlockType _clickedBlock;
    UIButton *_addBtn;
    UIImageView *_tagIV;
    UIImageView *_arrowImageView;
}

+ (double)heightWithItem:(id)arg1;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIImageView *tagIV; // @synthesize tagIV=_tagIV;
@property(retain, nonatomic) UIButton *addBtn; // @synthesize addBtn=_addBtn;
@property(copy, nonatomic) CDUnknownBlockType clickedBlock; // @synthesize clickedBlock=_clickedBlock;
- (void).cxx_destruct;
- (void)commentCanRaffle:(_Bool)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)addPhotoBtnDidClicked;

@end
